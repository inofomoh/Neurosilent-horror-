#pragma once
#include "../Engine/CoreEngine.h"
#include <iostream>

class HorrorGameLogic {
    CoreEngine* engine;
    int health = 100;
    int sanity = 100;

public:
    HorrorGameLogic(CoreEngine* eng) : engine(eng) {}

    void Run() {
        SceneLagos();
        SceneHighway();
        SceneIbadan();
        CheckEnd();
    }

    void SceneLagos() {
        std::cout << "\n🌫️ Scene: Lagos" << std::endl;
        std::cout << "🔥 The city burns behind you..." << std::endl;
        std::cout << "👣 You walk into the fog..." << std::endl;
        health -= 10;
        sanity -= 15;
        ShowStatus();
    }

    void SceneHighway() {
        std::cout << "\n➡️ Transition to the Highway..." << std::endl;
        std::cout << "🚗 You're alone on an endless road..." << std::endl;
        sanity -= 25;
        ShowStatus();
    }

    void SceneIbadan() {
        std::cout << "\n🕯️ Entering Ibadan — the Nightmare Zone..." << std::endl;
        std::cout << "👻 Shadows whisper around you..." << std::endl;
        health -= 30;
        sanity -= 40;
        ShowStatus();
    }

    void ShowStatus() {
        std::cout << "❤️ Health: " << health << " | 🧠 Sanity: " << sanity << std::endl;
    }

    void CheckEnd() {
        if (health <= 0 || sanity <= 0) {
            std::cout << "\n💀 You’ve lost yourself to the nightmare... GAME OVER." << std::endl;
        } else {
            std::cout << "\n🏆 You survived the night. A new dawn rises..." << std::endl;
        }
    }
};
