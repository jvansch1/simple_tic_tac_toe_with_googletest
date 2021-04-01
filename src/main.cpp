#include <iostream>

#include "headers/board.h"

int main() {
    Board *board = new Board();
    board->printBoard();
    board->setCell(0, 2, 'X');
    board->setCell(1, 2, 'X');
    board->setCell(2, 2, 'X');
    board->printBoard();
    bool won = board->checkColumnsWon();
    std::cout << "Game won: " << std::boolalpha << won << std::endl;
    return 0;
}