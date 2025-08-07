#include "CommandProcessor.h"
#include <string>

std::string CommandProcessor::gotoWhere(const std::string& input) {
    std::string gotoResponse;
    if (input == "1") {
        gotoResponse = "You are in the first folder.";
        where = 1;
    } else if (input == "2") {
        gotoResponse = "You are in the second folder.";
        where = 2;
    } else if (input == "3") {
        gotoResponse = "You are in the third folder.";
        where = 3;
    } else if (input == "4") {
        gotoResponse = "You are in the fourth folder.";
        where = 4;
    } else {
        gotoResponse = "Invalid folder number.";
    }
    return gotoResponse;
}