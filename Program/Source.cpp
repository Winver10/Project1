#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "openProcessor.h"
#include "Start.h"
using namespace std;

vector<string> loadList() {
	vector<string> list;
	string filePath = "canBeOpened.txt";
	ifstream file(filePath);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			if (!line.empty()) {
				list.push_back(line);
			}
		}
		file.close();
	}
	return list;
}

int main()
{
	cout << "Welcome to the MS Dos 11!" << endl;
	cout << "Which folder do you want to open?" << endl;
	cout << "Type 'help' for help." << endl;
	cout << "Type 'where' to see the current path you are in." << endl;
	Start start;
	start.run();
}