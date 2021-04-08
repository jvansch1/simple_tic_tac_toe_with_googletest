#ifndef BOARD_H
#define BOARD_H

#include <iostream>

class Board {
public:
    int board[3][3];
    void printBoard();
    bool setCell(int row, int col, char symbol);
    bool checkGameWon();
private:
    void printBoardEdge();
    bool checkRowsWon();
    bool checkColumnsWon();
    bool checkDiagonalsWon();
};

#endif