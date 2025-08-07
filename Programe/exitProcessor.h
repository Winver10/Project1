#pragma once
#include <string>
class CommandProcessor;
std::string handleExitCommand(CommandProcessor& processor, const std::string& input, bool& waitingForInput, bool& running);
