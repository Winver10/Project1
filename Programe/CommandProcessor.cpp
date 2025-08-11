#include "CommandProcessor.h"
#include "exitProcessor.h"
#include "helpProcessor.h"
#include "whereProcessor.h"
#include <string>

CommandProcessor::CommandProcessor() : where(0), running(true), waitingCommand("") {}

std::string CommandProcessor::processInput(const std::string& input) {
    if (where < 0 || where > 4) {
        running = false;
        return "The system has encountered an error, please restart.";
    }
    if (!waitingCommand.empty()) {
        if (waitingCommand == "exit") {
            waitingCommand = "";
            return handleExitCommand(*this, input, waitingCommand, running);
        } else if (waitingCommand == "goto") {
            waitingCommand = "";
            return gotoWhere(input);
        }
    }
    if (input == "hello") {
        return "Hello, user!";
    } else if (input == "help") {
        return handleHelpCommand();
    } else if (input == "exit") {
        waitingCommand = "exit";
        return handleExitCommand(*this, input, waitingCommand, running);
    } else if (input == "goto") {
        waitingCommand = "goto";
        return "Please enter the number of the folder you want to open (1-4): ";
    } else if (input == "where") {
        return handleWhereCommand(where);
    } else {
        return "Unknown command. Type 'help' for available commands.";
    }
}

bool CommandProcessor::isRunning() const {
    return running;
}

int CommandProcessor::getWhere() const {
    return where;
}
