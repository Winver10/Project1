#include"CommandProcessor.h"
#include"openProcessor.h"
#include"Reader.h"
#include<string>
#include <Windows.h>
#include <shellapi.h>

void openFile(std::string fileName) {
	TextReader reader;
	reader.loadFile(fileName);
	reader.run();
}

std::string CommandProcessor::openWhat(const std::string& input) {
	std::vector<std::string> allowFiles = loadList();
	bool found = false;
		//if (where == 3) {
			for (const auto& list : allowFiles) {
				if (input == list) {
					found = true;
					openFile(list);
					return "Opening " + list + "...";
				}
			}
		//}
		//else {
		//	return "I cannot see any files here.";
		//}
}