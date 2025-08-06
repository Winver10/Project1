#include "CommandProcessor.h"

CommandProcessor::CommandProcessor() : where(0), running(true), waitingForPasskey(false), waitingForGotoNumber(false) {}

std::string CommandProcessor::processInput(const std::string& input) {
    std::string response;
    if (where < 0 || where > 4) {
        running = false;
        return "The system has encountered an error, please restart.";
    }
    if (waitingForPasskey) {
        if (input == "Passkey is Smile") {
            running = false;
            response = "Exiting the program.";
        } else {
            response = "You must type the passkey like: Passkey is 'passkey'";
        }
        waitingForPasskey = false;
        return response;
    }
    if (waitingForGotoNumber) {
        if (input == "1") {
            response = "You are in the first folder.";
            where = 1;
        } else if (input == "2") {
            response = "You are in the second folder.";
            where = 2;
        } else if (input == "3") {
            response = "You are in the third folder.";
            where = 3;
        } else if (input == "4") {
            response = "You are in the fourth folder.";
            where = 4;
        } else {
            response = "Invalid folder number.";
        }
        waitingForGotoNumber = false;
        return response;
    }
    if (input == "hello") {
        response = "Hello, user!";
    } else if (input == "help") {
        response = "Available commands: hello, help, exit, where, goto";
    } else if (input == "exit") {
        response = "Enter the passkey to exit: ";
        waitingForPasskey = true;
    } else if (input == "goto") {
        response = "Please enter the number of the folder you want to open (1-4): ";
        waitingForGotoNumber = true;
    } else if (input.find("goto") != std::string::npos) {
        if (input.find("1") != std::string::npos) {
            response = "You are in the first folder.";
            where = 1;
        } else if (input.find("2") != std::string::npos) {
            response = "You are in the second folder.";
            where = 2;
        } else if (input.find("3") != std::string::npos) {
            response = "You are in the third folder.";
            where = 3;
        } else if (input.find("4") != std::string::npos) {
            response = "You are in the fourth folder.";
            where = 4;
        } else {
            response = "Invalid folder number.";
        }
    } else if (input == "where") {
        response = "You are in the folder " + std::to_string(where) + ". ";
        if (where == 3) {
            response += "There is a file in this folder: Smile.txt";
        } else {
            response += "There is nothing here.";
        }
    } else {
        response = "Unknown command. Type 'help' for available commands.";
    }
    return response;
}

bool CommandProcessor::isRunning() const {
    return running;
}

int CommandProcessor::getWhere() const {
    return where;
}
