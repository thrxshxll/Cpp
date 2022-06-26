// TicTacToe member-function definitions.
#include <iostream>
#include <iomanip>
#include <array>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe(const array<array<int, 3>, 3> boardEmpty){
    for(size_t count{97}, row{0}; row < 3; ++row){
        for(size_t column{0}; column < 3; ++column){
            board[row][column]=count++;
        }
    }
}

void TicTacToe::moveP1(){
    pullSign(signP1);
}

void TicTacToe::moveP2(){
    pullSign(signP2);
}

void TicTacToe::signPlayers(){
    cout << "Sign player 1 [X or O]: ";
    cin >> signP1;
    signP2 = (signP1 != 'X') ? 'X' : 'O';
}

void TicTacToe::pullSign(char signPlayer){
    displayBoard();
    cout << "\nPlayer [" << signPlayer << "]\nValid Position: ";
    char position;
    cin >> position;

    for(size_t count{0}, row{0}; row < 3; ++row){
        for(size_t column{0}; column < 3; ++column){
            if(position == board[row][column]){
                board[row][column]=signPlayer;
                return;
            }
        }
    }cout << "Invalid Position!\n" << endl;
}


void TicTacToe::displayBoard(){
    for(size_t row{0}; row < 3; ++row){

        for(size_t column{0}; column < 3; ++column){
            cout << setw(2);
            switch(board[row][column]){
                case 79:
                    cout << "O";
                    break;
                case 88:
                    cout << "X";
                    break;
                case 97 ... 105:
                    cout << char(board[row][column]);
                    break;
                default:
                    cout << " ";
            }
            if(column!=2) {cout << setw(2) << "|";}
        }cout << endl;

        if(row<2){
            for(size_t indx{0}; indx < 11; ++indx){
                if(indx!=3 && indx!=7)
                    cout << "-";
                else
                    cout << "+";
            }cout << endl;
        }
    }
}


// predicate functions
bool TicTacToe::isWin() const{

    // verify row-by-row
    for(size_t row{0}; row < 3; ++row){
        unsigned int count{0};
        for(size_t column{0}; column < 2; ++column){
            if(board[row][column]==board[row][column+1]){
                count++;
            }
        }
        if(count>=2){return true;}
    }

    // verify column-by-column
    for(size_t column{0}; column < 3; ++column){
        unsigned int count{0};
        for(size_t row{0}; row < 2; ++row){
            if(board[row][column]==board[row+1][column]){
                count++;
            }
        }
        if(count>=2){return true;}
    }

    // diagonals verify
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        return true;
    }else if(board[2][0]==board[1][1] && board[1][1]==board[0][2]){
        return true;
    }

    return false;
}