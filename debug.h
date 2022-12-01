#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>

void dbgLn(const char *str)
{
    std::cout << "[DEBUG] " << str << std::endl;
}

#endif // DEBUG_H
