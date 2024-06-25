#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define RED "\e[1;31m"
#define BLU "\e[1;34m"
#define YLW "\e[1;33m"
#define GRN "\e[1;32m"
#define RESET "\e[0m"

using namespace std;

void clearconsole(){
    printf("\e[1;1H\e[2J");
}

class Board {
    public:
    char board[40];
    char yellowHouse[4];
    char blueHouse[4];
    char greenHouse[4];
    char redHouse[4];
    int yellowOnField;
    int blueOnField;
    int greenOnField;
    int redOnField;


    Board(){
        for(int i = 0; i < 40; i++){
            board[i] = 'e';
        }
        for(int i = 0; i < 4; i++){
            yellowHouse[i] = 'e';
            blueHouse[i] = 'e';
            redHouse[i] = 'e';
            greenHouse[i] = 'e';
        }
        blueOnField = 0;
        redOnField = 0;
        yellowOnField = 0;
        greenOnField = 0;
    }
    ~Board(){
    }
    void printField(int i){
        if(board[i] == 'g'){
            cout << GRN " X" RESET;
        }if(board[i] == 'b'){
            cout << BLU " X" RESET;
        }if(board[i] == 'r'){
            cout << RED " X" RESET;
        }if(board[i] == 'y'){
            cout << YLW " X" RESET;
        }if(board[i] == 'e'){
            cout << " O";
        }
    }
    void printBoard(){
        if(redOnField < 4) {cout << RED " X" RESET;} else{cout << " O";}
        if(redOnField < 3) {cout << RED " X" RESET;} else{cout << " O";}
        cout << "    ";
        printField(0);
        printField(1);
        printField(2);
        cout << "    ";
        if(blueOnField < 4) {cout << BLU " X" RESET;} else{cout << " O";}
        if(blueOnField < 3) {cout << BLU " X" RESET << endl;} else{cout << " O" << endl;}
        if(redOnField < 2) {cout << RED " X" RESET;} else{cout << " O";}
        if(redOnField < 1) {cout << RED " X" RESET;} else{cout << " O";}
        cout << "    ";
        printField(39);
        if(blueHouse[0] == 'b') {cout << BLU " X" RESET;} else{cout << " O";}
        printField(3);
        cout << "    ";
        if(blueOnField < 2) {cout << BLU " X" RESET;} else{cout << " O";}
        if(blueOnField < 1) {cout << BLU " X" RESET << endl;} else{cout << " O" << endl;}
        cout << "        ";
        printField(38);
        if(blueHouse[1] == 'b') {cout << BLU " X" RESET;} else{cout << " O";}
        printField(4);
        cout << "        " << endl;
        cout << "        ";
        printField(37);
        if(blueHouse[2] == 'b') {cout << BLU " X" RESET;} else{cout << " O";}
        printField(5);
        cout << "        " << endl;
        printField(32);
        printField(33);
        printField(34);
        printField(35);
        printField(36);
        if(blueHouse[3] == 'b') {cout << BLU " X" RESET;} else{cout << " O";}
        printField(6);
        printField(7);
        printField(8);
        printField(9);
        printField(10);
        cout << endl;
        printField(31);
        if(redHouse[0] == 'r') {cout << RED " X" RESET;} else{cout << " O";}
        if(redHouse[1] == 'r') {cout << RED " X" RESET;} else{cout << " O";}
        if(redHouse[2] == 'r') {cout << RED " X" RESET;} else{cout << " O";}
        if(redHouse[3] == 'r') {cout << RED " X" RESET;} else{cout << " O";}
        cout << "  ";
        if(greenHouse[3] == 'g') {cout << GRN " X" RESET;} else{cout << " O";}
        if(greenHouse[2] == 'g') {cout << GRN " X" RESET;} else{cout << " O";}
        if(greenHouse[1] == 'g') {cout << GRN " X" RESET;} else{cout << " O";}
        if(greenHouse[0] == 'g') {cout << GRN " X" RESET;} else{cout << " O";}
        printField(11);
        cout << endl;
        printField(30);
        printField(29);
        printField(28);
        printField(27);
        printField(26);
        if(yellowHouse[3] == 'y') {cout << YLW " X" RESET;} else{cout << " O";}
        printField(16);
        printField(15);
        printField(14);
        printField(13);
        printField(12);
        cout << endl;
        cout << "        ";
        printField(25);
        if(yellowHouse[2] == 'y') {cout << YLW " X" RESET;} else{cout << " O";}
        printField(17);
        cout << "        " << endl;
        cout << "        ";
        printField(24);
        if(yellowHouse[1] == 'y') {cout << YLW " X" RESET;} else{cout << " O";}
        printField(18);
        cout << "        " << endl;
        if(yellowOnField < 4) {cout << YLW " X" RESET;} else{cout << " O";}
        if(yellowOnField < 3) {cout << YLW " X" RESET;} else{cout << " O";}
        cout << "    ";
        printField(23);
        if(yellowHouse[0] == 'y') {cout << YLW " X" RESET;} else{cout << " O";}
        printField(19);
        cout << "    ";
        if(greenOnField < 4) {cout << GRN " X" RESET;} else{cout << " O";}
        if(greenOnField < 3) {cout << GRN " X" RESET << endl;} else{cout << " O" << endl;}
        if(yellowOnField < 2) {cout << YLW " X" RESET;} else{cout << " O";}
        if(yellowOnField < 1) {cout << YLW " X" RESET;} else{cout << " O";}
        cout << "    ";
        printField(22);
        printField(21);
        printField(20);
        cout << "    ";
        if(greenOnField < 2) {cout << GRN " X" RESET;} else{cout << " O";}
        if(greenOnField < 1) {cout << GRN " X" RESET << endl;} else{cout << " O" << endl;}
        return;
    };




};