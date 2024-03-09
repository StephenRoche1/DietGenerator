#include "Database.h"
#include <string>
#include <iostream>


Database::Database(const std::string& _connectionString) :connectionString(_connectionString),DB(nullptr){}
bool Database::open() {
	int result = sqlite3_open(connectionString.c_str(),&DB);
	return result == SQLITE_OK;
}
void Database::close() {
	if (DB) {
		sqlite3_close(DB);
		DB = nullptr;
	}
}
bool Database::executeQuery(const std::string& query) {
	if (!DB) {
		std::cerr << "SQLite database is not open" << std::endl;
	}
	char* errorMessage = nullptr;
	int result = sqlite3_exec(DB, query.c_str(), nullptr, nullptr, &errorMessage);
	if (result != SQLITE_OK) {
		std::cerr << "SQLite error: " << errorMessage << std::endl;
		sqlite3_free(errorMessage);
		return false;
	}
	return true;
}
bool Database::CreateRecord(const std::string& tablename, const std::string& values) {
	std::string query = "INSERT INTO " + tablename + "VALUES (" + values + ");";
	return executeQuery(query);
}
bool Database::readRecords(const std::string& tablename, const std::string& condition, const std::string& result) {
	std::string query = "SELECT * FROM " + tablename + " WHERE " + condition + ";";
	return executeQuery(query);
}

bool Database::updateRecords(const std::string& tablename, const std::string& setClause, const std::string& condition) {
	std::string query = "UPDATE " + tablename + " SET " + setClause + " WHERE " + condition + ";";
	return executeQuery(query);

}
bool Database::deleteRecords(const std::string& tablename, const std::string& condition) {
	std::string query = "DELETE FROM " + tablename + " WHERE " + condition + ";";
	return executeQuery(query);
}
