#pragma once
#include <string>
#include <iostream>

class CommandProcessor {
private:
    int where;
    bool running;
    bool waitingForPasskey; 
    bool waitingForGotoNumber; 
public:
    CommandProcessor();
    std::string processInput(const std::string& input);
    bool isRunning() const;
    int getWhere() const;
};
