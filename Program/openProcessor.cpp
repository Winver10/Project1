#include"CommandProcessor.h"
#include"openProcessor.h"
#include<string>
#include <Windows.h>
#include <shellapi.h>

void openFile(std::string fileName) {
	ShellExecuteA(NULL, "open", fileName.c_str(), NULL, NULL, SW_SHOW);
}

std::string CommandProcessor::openWhat(const std::string& input) {
	std::vector<std::string> allowFiles = loadList();
	bool fonund = false;
		//if (where == 3) {
			for (const auto& list : loadList()) {
				if (input == list) {
					fonund = true;
					openFile(list);
					return "Opening " + list + "...";
				}
			}
		//}
		//else {
		//	return "I cannot see any files here.";
		//}
}