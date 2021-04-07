#include "gtest/gtest.h"
#include "../src/board.cpp"

TEST (CheckGameWon, CheckRowsWithX) {
    Board *rowOneBoard = new Board();
    EXPECT_EQ(false, rowOneBoard->checkRowsWon());
    rowOneBoard->setCell(0, 0, 'X');
    rowOneBoard->setCell(0, 1, 'X');
    rowOneBoard->setCell(0, 2, 'X');

    EXPECT_EQ(true, rowOneBoard->checkRowsWon());

    Board *rowTwoBoard = new Board();
    EXPECT_EQ(false, rowTwoBoard->checkRowsWon());
    rowTwoBoard->setCell(1, 0, 'X');
    rowTwoBoard->setCell(1, 1, 'X');
    rowTwoBoard->setCell(1, 2, 'X');

    EXPECT_EQ(true, rowTwoBoard->checkRowsWon());

    Board *rowThreeBoard = new Board();
    EXPECT_EQ(false, rowThreeBoard->checkRowsWon());
    rowThreeBoard->setCell(2, 0, 'X');
    rowThreeBoard->setCell(2, 1, 'X');
    rowThreeBoard->setCell(2, 2, 'X');

    EXPECT_EQ(true, rowThreeBoard->checkRowsWon());
}

TEST (CheckGameWon, CheckRowsWithO) {
    Board *rowOneBoard = new Board();
    EXPECT_EQ(false, rowOneBoard->checkRowsWon());
    rowOneBoard->setCell(0, 0, 'O');
    rowOneBoard->setCell(0, 1, 'O');
    rowOneBoard->setCell(0, 2, 'O');

    EXPECT_EQ(true, rowOneBoard->checkRowsWon());

    Board *rowTwoBoard = new Board();
    EXPECT_EQ(false, rowTwoBoard->checkRowsWon());
    rowTwoBoard->setCell(1, 0, 'O');
    rowTwoBoard->setCell(1, 1, 'O');
    rowTwoBoard->setCell(1, 2, 'O');

    EXPECT_EQ(true, rowTwoBoard->checkRowsWon());

    Board *rowThreeBoard = new Board();
    EXPECT_EQ(false, rowThreeBoard->checkRowsWon());
    rowThreeBoard->setCell(2, 0, 'O');
    rowThreeBoard->setCell(2, 1, 'O');
    rowThreeBoard->setCell(2, 2, 'O');

    EXPECT_EQ(true, rowThreeBoard->checkRowsWon());
}

int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}