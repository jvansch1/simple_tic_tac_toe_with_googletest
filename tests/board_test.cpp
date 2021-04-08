#include "gtest/gtest.h"
#include "../src/board.cpp"

/*
    Tests which assert win conditions for the board
*/

TEST (CheckGameWon, CheckRowsWithX) {
    Board *rowOneBoard = new Board();
    EXPECT_EQ(false, rowOneBoard->checkGameWon());
    rowOneBoard->setCell(0, 0, 'X');
    rowOneBoard->setCell(0, 1, 'X');
    rowOneBoard->setCell(0, 2, 'X');

    EXPECT_EQ(true, rowOneBoard->checkGameWon());

    Board *rowTwoBoard = new Board();
    EXPECT_EQ(false, rowTwoBoard->checkGameWon());
    rowTwoBoard->setCell(1, 0, 'X');
    rowTwoBoard->setCell(1, 1, 'X');
    rowTwoBoard->setCell(1, 2, 'X');

    EXPECT_EQ(true, rowTwoBoard->checkGameWon());

    Board *rowThreeBoard = new Board();
    EXPECT_EQ(false, rowThreeBoard->checkGameWon());
    rowThreeBoard->setCell(2, 0, 'X');
    rowThreeBoard->setCell(2, 1, 'X');
    rowThreeBoard->setCell(2, 2, 'X');

    EXPECT_EQ(true, rowThreeBoard->checkGameWon());
}

TEST (CheckGameWon, CheckRowsWithO) {
    Board *rowOneBoard = new Board();
    EXPECT_EQ(false, rowOneBoard->checkGameWon());
    rowOneBoard->setCell(0, 0, 'O');
    rowOneBoard->setCell(0, 1, 'O');
    rowOneBoard->setCell(0, 2, 'O');

    EXPECT_EQ(true, rowOneBoard->checkGameWon());

    Board *rowTwoBoard = new Board();
    EXPECT_EQ(false, rowTwoBoard->checkGameWon());
    rowTwoBoard->setCell(1, 0, 'O');
    rowTwoBoard->setCell(1, 1, 'O');
    rowTwoBoard->setCell(1, 2, 'O');

    EXPECT_EQ(true, rowTwoBoard->checkGameWon());

    Board *rowThreeBoard = new Board();
    EXPECT_EQ(false, rowThreeBoard->checkGameWon());
    rowThreeBoard->setCell(2, 0, 'O');
    rowThreeBoard->setCell(2, 1, 'O');
    rowThreeBoard->setCell(2, 2, 'O');

    EXPECT_EQ(true, rowThreeBoard->checkGameWon());
}

TEST (CheckGameWon, CheckRowsWithInvalidChar) {
    Board *rowOneBoard = new Board();
    EXPECT_EQ(false, rowOneBoard->checkGameWon());
    rowOneBoard->setCell(0, 0, 'Z');
    rowOneBoard->setCell(0, 1, 'Z');
    rowOneBoard->setCell(0, 2, 'Z');

    EXPECT_EQ(false, rowOneBoard->checkGameWon());

    Board *rowTwoBoard = new Board();
    EXPECT_EQ(false, rowTwoBoard->checkGameWon());
    rowTwoBoard->setCell(1, 0, 'Z');
    rowTwoBoard->setCell(1, 1, 'Z');
    rowTwoBoard->setCell(1, 2, 'Z');

    EXPECT_EQ(false, rowTwoBoard->checkGameWon());

    Board *rowThreeBoard = new Board();
    EXPECT_EQ(false, rowThreeBoard->checkGameWon());
    rowThreeBoard->setCell(2, 0, 'Z');
    rowThreeBoard->setCell(2, 1, 'Z');
    rowThreeBoard->setCell(2, 2, 'Z');

    EXPECT_EQ(false, rowThreeBoard->checkGameWon());
}

TEST (CheckGameWon, CheckColumnsWithX) {
    Board *columnOneBoard = new Board();
    EXPECT_EQ(false, columnOneBoard->checkGameWon());
    columnOneBoard->setCell(0, 0, 'X');
    columnOneBoard->setCell(1, 0, 'X');
    columnOneBoard->setCell(2, 0, 'X');

    EXPECT_EQ(true, columnOneBoard->checkGameWon());

    Board *columnTwoBoard = new Board();
    EXPECT_EQ(false, columnTwoBoard->checkGameWon());
    columnTwoBoard->setCell(0, 1, 'X');
    columnTwoBoard->setCell(1, 1, 'X');
    columnTwoBoard->setCell(2, 1, 'X');

    EXPECT_EQ(true, columnTwoBoard->checkGameWon());

    Board *columnThreeBoard = new Board();
    EXPECT_EQ(false, columnThreeBoard->checkGameWon());
    columnThreeBoard->setCell(0, 2, 'X');
    columnThreeBoard->setCell(1, 2, 'X');
    columnThreeBoard->setCell(2, 2, 'X');

    EXPECT_EQ(true, columnThreeBoard->checkGameWon()); 
}

TEST (CheckGameWon, CheckColumnsWithO) {
    Board *columnOneBoard = new Board();
    EXPECT_EQ(false, columnOneBoard->checkGameWon());
    columnOneBoard->setCell(0, 0, 'O');
    columnOneBoard->setCell(1, 0, 'O');
    columnOneBoard->setCell(2, 0, 'O');

    EXPECT_EQ(true, columnOneBoard->checkGameWon());

    Board *columnTwoBoard = new Board();
    EXPECT_EQ(false, columnTwoBoard->checkGameWon());
    columnTwoBoard->setCell(0, 1, 'O');
    columnTwoBoard->setCell(1, 1, 'O');
    columnTwoBoard->setCell(2, 1, 'O');

    EXPECT_EQ(true, columnTwoBoard->checkGameWon());

    Board *columnThreeBoard = new Board();
    EXPECT_EQ(false, columnThreeBoard->checkGameWon());
    columnThreeBoard->setCell(0, 2, 'O');
    columnThreeBoard->setCell(1, 2, 'O');
    columnThreeBoard->setCell(2, 2, 'O');

    EXPECT_EQ(true, columnThreeBoard->checkGameWon()); 
}

TEST (CheckGameWon, CheckDiagonalsWithX) {
    Board *diagonalOneBoard = new Board;
    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());
    diagonalOneBoard->setCell(0, 0, 'X');
    diagonalOneBoard->setCell(1, 1, 'X');
    diagonalOneBoard->setCell(2, 2, 'X');

    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());

    Board *diagonalTwoBoard = new Board;
    EXPECT_EQ(false, diagonalTwoBoard->checkGameWon());
    diagonalTwoBoard->setCell(0, 2, 'X');
    diagonalTwoBoard->setCell(1, 1, 'X');
    diagonalTwoBoard->setCell(2, 0, 'X');

    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());
}

TEST (CheckGameWon, CheckDiagonalsWithO) {
    Board *diagonalOneBoard = new Board;
    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());
    diagonalOneBoard->setCell(0, 0, 'O');
    diagonalOneBoard->setCell(1, 1, 'O');
    diagonalOneBoard->setCell(2, 2, 'O');

    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());

    Board *diagonalTwoBoard = new Board;
    EXPECT_EQ(false, diagonalTwoBoard->checkGameWon());
    diagonalTwoBoard->setCell(0, 2, 'O');
    diagonalTwoBoard->setCell(1, 1, 'O');
    diagonalTwoBoard->setCell(2, 0, 'O');

    EXPECT_EQ(false, diagonalOneBoard->checkGameWon());
}


// Main function needed to run all tests
int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}