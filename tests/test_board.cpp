#include "../board.hpp"
#include <cassert>

int main() {
    Board b;

    assert(b.PlaceMove({0, 0}, Player::X) == true);
    assert(b.PlaceMove({0, 0}, Player::O) == false);
    assert(b.GetCell({0, 0}) == Player::X);

    assert(b.PlaceMove({1, 1}, Player::O) == true);
    assert(b.GetCell({1, 1}) == Player::O);

    return 0;
}
