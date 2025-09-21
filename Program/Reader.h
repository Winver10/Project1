#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

class TextReader {
private:
	vector<string> lines;
	string filename;
	int currentline;
	int pageSize;

	void clearScreen() {
#ifdef _WIN32
		system("cls");
#else
		system("clear");
#endif // _WIN32
	}

	void displayPages() {
		clearScreen();
		cout << "File: " << filename << " (Page " << (currentline / pageSize + 1) << ")\n";
		cout << "----------------------------------------\n";
		int endLine = min(currentline + pageSize, (int)lines.size());
		for (int i = currentline; i < endLine; ++i) {
			cout << lines[i] << "\n";
		}
		cout << "Command (n: next, p: previous, q: quit)\n";
	}

public:
	TextReader() : currentline(0), pageSize(20) {}

	bool loadFile(const string& filename) {
		ifstream infile(filename);
		if (!infile) {
			cout << "There was some problem in this game, I think you cam re-download it.\n";
			return false;
		}
		lines.clear();
		string line;
		while (getline(infile, line)) {
			lines.push_back(line);
		}
		infile.close();
		currentline = 0;
		this->filename = filename;
		return true;
	}

	void run() {
		if (lines.empty()) {
			cout << "I think there is nothing\n";
			return;
		}

		string command;
		bool running = true;

		while (running) {
			displayPages();
			getline(cin, command);
			if (command.empty()) continue;
			switch (command[0]) {
			case 'n':
				currentline = min(currentline + pageSize, static_cast<int>(lines.size()) - 1);
				break;

			case 'p':
				currentline = max(0, currentline - pageSize);
				break;

			case 'q':
				running = false;
				break;
			}
		}
	}
};