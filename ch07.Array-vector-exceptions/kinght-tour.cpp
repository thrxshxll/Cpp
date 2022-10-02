/*

7.22 (Knight’s Tour) One of the more interesting puzzlers for chess buffs is the Knight’s Tour
problem. The question is this: Can the chess piece called the knight move around an empty chess-
board and touch each of the 64 squares once and only once? We study this intriguing problem in
depth in this exercise.
The knight makes L-shaped moves (over two in one direction then over one in a perpendicu-
lar direction). Thus, from a square in the middle of an empty chessboard, the knight can make
eight different moves (numbered 0 through 7).

*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <ctime>
using namespace std;
const size_t row{8}, column{8};

// Heuristic way for moving the knight, strategically
array<array<int, row>, column> accessibility{
    2,3,4,4,4,4,3,2,
    3,4,6,6,6,6,4,3,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    3,4,6,6,6,6,4,3,
    2,3,4,4,4,4,3,2
};

const array<int, 8> horizontal{2,1,-1,-2,-2,-1,1,2};
const array<int, 8> vertical{-1,-2,-2,-1,1,2,2,1};

void printBoard(array<array<int, column>, row>& board, size_t cRow, size_t cColumn);
int knightMoves(array<array<int, column>, row>& board, size_t type, size_t& cRow, size_t& cColumn);
bool visitedSquare(array<array<int, column>, row> & board, int nextRow, int nextColumn);
bool landOff(int nextRow, int nextColumn);
int moveNumberSelect(array<array<int, column>, row>& board, int cRow, int cColumn);
void reduceAccessibility(int cRow, int cColumn);

int main(){
    srand(static_cast<unsigned int>(time(0)));

    array<array<int, column>, row> board{};
    size_t moveNumber, currentRow{static_cast<size_t>(rand()%8)}, currentColumn{static_cast<size_t>(rand()%8)};

    while(-1 != moveNumber){
        printBoard(board, currentRow, currentColumn);

        moveNumber=moveNumberSelect(board, currentRow, currentColumn);

        system("sleep 0.30");
        system("clear");
        if(knightMoves(board, moveNumber, currentRow, currentColumn)==64){
            printBoard(board, currentRow, currentColumn);
            break;
        }
    }
}

// cRow currentRow, cColumn currentColumn
void printBoard(array<array<int, column>, row>& board, size_t cRow, size_t cColumn){
    for(size_t irow{0}; irow < board.size(); irow++){
        for(size_t icolumn{0}; icolumn < board[irow].size(); icolumn++){
            if(irow != cRow || icolumn != cColumn){
                cout << setw(3) << board[irow][icolumn];                
            }else
                cout << setw(3) << "K";
        }cout << endl;
    }
}

int knightMoves(array<array<int, column>, row>& board, size_t type, size_t& cRow, size_t& cColumn){
    static unsigned int counter{1};

    cRow += vertical[type];
    cColumn += horizontal[type];

    reduceAccessibility(cRow, cColumn);

    board[cRow][cColumn]=counter;
    return counter++;
}

// verify whether knight will go out on chessboard
bool landOff(int nextRow, int nextColumn){
    if(nextRow<0 || nextRow>7){
        return true;
    }
    if(nextColumn<0 || nextColumn>7){
        return true;
    }return false;
}

// verify whether knight already visited next square
bool visitedSquare(array<array<int, column>, row> & board, int nextRow, int nextColumn){
    if(board[nextRow][nextColumn]!=0){
        return true;
    }return false;
}

int moveNumberSelect(array<array<int, column>, row>& board, int cRow, int cColumn){
    int lowestAccess{8};
    int ansMove{rand()%8};
    for(size_t move{0}; move<8; move++){

        if( !landOff(cRow+vertical[move], cColumn+horizontal[move]) ){

            if( !visitedSquare(board, cRow+vertical[move], cColumn+horizontal[move]) ){

                if(accessibility[cRow+vertical[move]][cColumn+horizontal[move]] < lowestAccess){
                    lowestAccess=accessibility[cRow+vertical[move]][cColumn+horizontal[move]];
                    ansMove=move;
                }
            }
        }
    }return ansMove;
}

void reduceAccessibility(int cRow, int cColumn){
    for(size_t move{0}; move<8; move++){
        if( !landOff(cRow+vertical[move], cColumn+horizontal[move]) ){
            accessibility[cRow+vertical[move]][cColumn+horizontal[move]]--;
        }

    }
}