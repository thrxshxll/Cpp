#include <iostream>
#include <cstdlib>
#include "TicTacToe.h"
using namespace std;

int main(){
    TicTacToe game;

    // game.displayBoard();
    // return 0;
    game.signPlayers();

    while(true){
        game.moveP1();
        if(game.isWin()){
            system("clear");
            cout << "Player [X] won!\n" << endl;
            break;
        }
        game.moveP2();
        if(game.isWin()){
            system("clear");
            cout << "Player [O] won!\n" << endl;
            break;
        }
    }

}