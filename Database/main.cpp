#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include "Database.hpp"

using namespace fz;
using namespace std;

void RuntimeTest()
{
	string csvPath = "csv/test.csv";
	string jsonPath = "json/test.json";

	Database::LoadFromCsv(csvPath);
	Database::LoadFromJson(jsonPath);

	auto& csvTable = Database::GetCsvTable(csvPath);
	auto& json = Database::GetJsonObject(jsonPath);

	std::string num = csvTable["Wave1"]["Crawler"];
	cout << num << endl;

	csvTable.PrintTable();
	cout << json << endl;

	Database::UnLoadAll();
}

int main(void)
{
	RuntimeTest();

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(166);
	_CrtDumpMemoryLeaks();
	return 0;
}