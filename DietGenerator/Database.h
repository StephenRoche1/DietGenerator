#pragma once
#ifndef DATABASE_H
#define DATABASE_H
#include "sqlite3.h"
#include <string>
class Database
{
private:
	std::string connectionString;
	sqlite3* DB;
	std::string password;
	bool executeQuery(const std::string& _query);
public:
	Database(const std::string& _connectionString);
	//basic opening and closing functions
	bool open();
	void close();
	// Crud Functions
	bool CreateRecord(const std::string& tablename, const std::string& values);
	bool readRecords(const std::string& tablename, const std::string& condition,const std::string& result);
	bool updateRecords(const std::string& tablename, const std::string& setClause, const std::string& condition);
	bool deleteRecords(const std::string& tablename, const std::string& condition);

};
#endif
