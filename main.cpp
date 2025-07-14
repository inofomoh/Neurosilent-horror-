#include <iostream>
#include "Engine/CoreEngine.h"
#include "Game/HorrorGameLogic.h"

int main() {
    CoreEngine engine;
    engine.Init("NeuroSilent Engine");

    HorrorGameLogic game(&engine);
    game.Run();

    engine.Shutdown();
    return 0;
}
