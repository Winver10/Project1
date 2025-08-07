#include "Start.h"
#include <iostream>

Start::Start() {}

void Start::run() {
    CommandProcessor processor;
    while (processor.isRunning()) {
        std::cout << "> ";
        std::string input;
        std::getline(std::cin, input);
        std::string gotoResponse = processor.processInput(input);
        std::cout << gotoResponse << std::endl;
    }
}
