#include "Database.h"
#include <string>
#include <fstream>
#include <sstream>
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
bool Database::createTable(const std::string& _tablename, const std::string& columns){
	std::string query = "CREATE TABLE IF NOT EXISTS " + _tablename + " (" + columns + ");";
	return executeQuery(query);
}
bool Database::importRecipes(const std::string& csvFilePath) {
    // Open the CSV file
    std::ifstream csvFile(csvFilePath);

    // Check if the file is open
    if (!csvFile.is_open()) {
        std::cerr << "Error opening file: " << csvFilePath << std::endl;
        return false; // Return an error code
    }

    // Read and insert data into the Recipe table
    std::string line;
    while (std::getline(csvFile, line)) {
        // Use a stringstream to parse the CSV line
        std::istringstream ss(line);
        std::string title, ingredients, directions, link, source, NER;

        // Extract data from CSV line
        std::getline(ss, title, ',');
        std::getline(ss, ingredients, ',');
        std::getline(ss, directions, ',');
        std::getline(ss, link, ',');
        std::getline(ss, source, ',');
        std::getline(ss, NER, ',');

        // Construct and execute the SQL query
        std::string query = "INSERT INTO Recipe (title, ingredients, directions, link, source, NER) VALUES ('" +
            title + "', '" + ingredients + "', '" + directions + "', '" +
            link + "', '" + source + "', '" + NER + "');";

        if (!executeQuery(query)) {
            std::cerr << "Error inserting data into the Recipe table." << std::endl;
            // Handle the error if needed
            csvFile.close();
            return false;
        }
    }

    // Close the CSV file
    csvFile.close();

    return true; // Return true to indicate successful execution
}