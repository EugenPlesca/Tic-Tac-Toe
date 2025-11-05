#include "game_engine.hpp"
#include "painter.hpp"
#include <memory>

int main() {
    std::shared_ptr<Painter> painter = std::make_shared<ConsolePainter>();
    GameEngine game(painter);
    game.Run();
    return 0;
}
