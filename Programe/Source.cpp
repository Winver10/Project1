#include <iostream>
#include <string>
#include "Start.h"
using namespace std;

int main()
{
	cout << "Welcome to the MS Dos 11!" << endl;
	cout << "Which folder do you want to open?" << endl;
	cout << "Type 'help' for help." << endl;
	cout << "Type 'where' to see the current path you are in." << endl;
	Start start;
	start.run();
}