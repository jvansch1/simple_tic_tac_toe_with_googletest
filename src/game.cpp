#include <iostream>

#include "headers/game.h"

Game::Game() {
    currentPlayer = 'X';
}

void Game::runGame() {
    while (!board.checkGameWon()) {
        bool gotCorrectUserInput = false;

        while (!gotCorrectUserInput) {
            board.printBoard();
            std::cout << "\nCurrent Player: " << currentPlayer << std::endl;
            int * playerInput = getUserInput();
            gotCorrectUserInput = board.setCell(playerInput[0], playerInput[1], currentPlayer);
        }

        switchPlayer();
    }
    // After the game is over, print the board one final time and say who won
    board.printBoard();
    // We need to switch the player back to the other person
    switchPlayer();
    std::cout << "Player " << currentPlayer << " is the winner!" << std::endl;
}

int * Game::getUserInput() {
    int row, col;
    std::cout << "\nPlease enter the row you would like to place your piece: ";
    std::cin >> row;

    std::cout << "\nPlease enter the column you would like to place your piece: ";
    std::cin >> col;

    int *position = new int[2];
    position[0] = row;
    position[1] = col;

    return position;
}

void Game::switchPlayer() {
    if (currentPlayer == 'X') {
        currentPlayer = 'O';
    } else {
        currentPlayer = 'X';
    }
}