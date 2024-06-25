#include <iostream>
#include<unistd.h>  
#include "aergerdichnich.h"

int main(){
    auto board = Board();
    board.board[0] = 'g';
    board.greenOnField = 1;
    int count = 0;
    while(true){
        board.board[count] = 'e';
        count++;
        if(count == 40){
            count = 0;
        }
        board.board[count] = 'g';
        clearconsole();
        board.printBoard();
        sleep(1);
        
    }
}