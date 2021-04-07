#include "headers/board.h"

void Board::printBoard() {
    printBoardEdge();
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 0) {
                std::cout << "| |"; 
            } else {
                std::cout << "|" << char(board[i][j]) << "|";
            }
        }
        std::cout << std::endl;
    }
    printBoardEdge();
}

void Board::setCell(int row, int col, char symbol) {
    if (symbol != 'X' && symbol != 'O') {
        std::cout << "Not a valid Tic Tac Toe character. Please use X or O." << std::endl;
        return;
    }

    board[row][col] = symbol;
}

void Board::printBoardEdge() {
    std::cout << "---------" << std::endl;
}

bool Board::checkRowsWon() {
    for (int row = 0; row < 3; row++) {
        if (board[row][0] != 'X' && board[row][0] != 'O') {
            // If any of the cells are empty then we know the row cant be won
            continue;
        } 
        if (board[row][0] == board[row][1] && board[row][0] == board[row][2]) {
            return true;
        } 
    }
    return false;
}

bool Board::checkColumnsWon() {
    for (int col = 0; col < 3; col++) {
        if (board[0][col] != 'X' && board[0][col] != 'O') {
            continue;
        }
        if (board[0][col] == board[1][col] && board[0][col] == board[2][col]) {
            return true;
        }
    }
    return false;
}

bool Board::checkDiagonalsWon() {
    // First check if the top most cells in the diagonal are actually valid values
    // If they are not return false
    if (board[0][0] != 'O' && board[0][0] != 'X') {
        return false;
    }

    if (board[0][2] != 'O' && board[0][2] != 'X') {
        return false;
    }

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return true;
    }

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return true;
    }
    return false;
}

