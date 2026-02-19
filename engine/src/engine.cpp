#include "Engine.h"
#include <iostream>

Engine::Engine() {}
Engine::~Engine() {}

bool Engine::Initialize() {
    std::cout << "Engine initializing\n";
    // init subsystems: renderer, resource manager, physics, scripting
    return true;
}

void Engine::Run() {
    std::cout << "Engine running main loop\n";
    // minimal loop
    for (int i = 0; i < 3; ++i) {
        // update, render
    }
}

void Engine::Shutdown() {
    std::cout << "Engine shutdown\n";
}