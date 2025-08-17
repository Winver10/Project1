#include "CommandProcessor.h"
#include <string>

std::string CommandProcessor::gotoWhere(const std::string& input) {
    std::string gotoResponse;
    if (input == "1") {
        gotoResponse = "You are in the Forder1.";
        where = 1;
    } else if (input == "2") {
        gotoResponse = "You are in the Forder2.";
        where = 2;
    } else if (input == "3") {
        gotoResponse = "You are in the Forder3.";
        where = 3;
    } else if (input == "4") {
        gotoResponse = "You are in the Forder4.";
        where = 4;
    } else {
        gotoResponse = "Invalid folder number.";
    }
    return gotoResponse;
}