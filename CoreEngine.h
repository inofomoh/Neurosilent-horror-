#pragma once
#include <iostream>
#include <string>

class CoreEngine {
public:
    void Init(const std::string& title) {
        std::cout << "🚨 Welcome to " << title << "..." << std::endl;
    }

    void Shutdown() {
        std::cout << "\n🔚 Shutting down NeuroSilent Engine..." << std::endl;
    }
};
