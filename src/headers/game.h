#include "board.h"

class Game {
    public:
        void runGame();
        Game();
    private:
        Board board;

        bool checkGameWon();
        int * getUserInput();
        void switchPlayer();
        char currentPlayer;      
};
