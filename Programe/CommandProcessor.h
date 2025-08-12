#pragma once
#include <string>
#include <iostream>

class CommandProcessor {
private:
    int where;
    bool running;
    std::string waitingCommand; 
public:
    CommandProcessor();
    std::string gotoWhere(const std::string& input);
    std::string processInput(const std::string& input);
    std::string openWhat(const std::string& input);
    bool isRunning() const;
    int getWhere() const;
    friend std::string handleExitCommand(CommandProcessor&, const std::string&, std::string&, bool&);
};

std::string handleExitCommand(CommandProcessor& processor, const std::string& input, std::string& waitingCommand, bool& running);
std::string handleHelpCommand();
std::string handleWhereCommand(int where);
