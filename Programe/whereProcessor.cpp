#include "CommandProcessor.h"
#include <string>

std::string handleWhereCommand(int where) {
    std::string response = "You are in the folder " + std::to_string(where) + ". ";
    if (where == 3) {
        response += "There is a file in this folder: Smile.txt";
    } else {
        response += "There is nothing here.";
    }
    return response;
}
