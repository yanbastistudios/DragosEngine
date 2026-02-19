#include "Engine.h"
#include <iostream>

int main() {
    std::cout << "Dragos Engine minimal start\n";
    Engine engine;
    if (!engine.Initialize()) return -1;
    engine.Run();
    engine.Shutdown();
    return 0;
}