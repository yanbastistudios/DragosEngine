#include "CSharpBridge.h"
#include <iostream>

void Native_Log(const char* message) {
    std::cout << "[Native] " << (message ? message : "(null)") << std::endl;
}