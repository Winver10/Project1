#include "exitProcessor.h"
#include "CommandProcessor.h"
#include <string>

std::string handleExitCommand(CommandProcessor& processor, const std::string& input, std::string& waitingCommand, bool& running) {
    std::string response;
    if (input == "exit") {
        response = "Enter the passkey to exit: ";
        waitingCommand = "exit";
    } else if (input == "Passkey is Smile") {
        running = false;
        response = "Exiting the program.";
    } else {
        response = "You must type the passkey like: Passkey is 'passkey'";
        waitingCommand = "exit";
    }
    return response;
}
