#include <iostream>

using namespace std;

class Game {
private:
    /* data */
public:
    /* public data and methods */
    Game();
};

Game::Game() {
    cout << "Hello World from Game!\n";
}

int main() {
    Game game = Game();
}