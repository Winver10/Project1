#include "CommandProcessor.h"
#include <string>

std::string handleWhereCommand(int where) {
    std::string response = "You are in the Folder" + std::to_string(where) + ". ";
    if (where == 3) {
        response += "There is a file in this folder: Smile.txt";
    }
    else if (where == 0) {
        response += "You are in the main directory.";
    } 
    else {
        response += "There is nothing here.";
    }
    return response;
}
