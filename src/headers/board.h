#include <iostream>

class Board {
public:
    int board[3][3];
    void printBoard();
    void setCell(int row, int col, char symbol);
    bool checkRowsWon();
    bool checkColumnsWon();
    bool checkDiagonalsWon();
private:
    void printBoardEdge();
};