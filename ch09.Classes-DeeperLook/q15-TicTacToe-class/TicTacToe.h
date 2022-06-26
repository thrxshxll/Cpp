/**
 * TicTacToe class to play the tic-tac-toe game.
 * */

// TicTacToe class definition.
// Member functions are defined in TicTacToe.cpp

#include <array>

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe{
public:
    // constructor
    explicit TicTacToe(const std::array<std::array<int, 3>, 3> ={});

    // access functions
    void signPlayers();

    void moveP1();
    void moveP2();

    void displayBoard();
    bool isWin() const;

private:
    std::array<std::array<int, 3>, 3> board;
    char signP1;
    char signP2;

    // utility functions.
    // void displayBoard();
    // predicate functions
    void pullSign(char);
};

#endif