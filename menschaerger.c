#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "aergerdichnich.h"

int main(){
    //INitialisierung Spielbrett
    int strecke[40];
    for(int i = 0; i < 40; i++){
        strecke[i] = 0;
    }
    //INitialisierung Spielvariablen
    int redBank = 4;
    int blueBank = 4;
    int ylwBank = 4;
    int greenBank = 4;
    int redHouse = 0;
    int blueHouse = 0;
    int ylwHouse = 0;
    int greenHouse = 0;

    //Animation um zu gucken ob der Array Funktioniert
    int counter = 0;
    strecke[11] = 4;
    while(1){
        counter = counter % 40;
        strecke[counter] = 1;
        if(counter != 0){
            strecke[counter - 1] = 0;
        }if(counter == 0){
            strecke[39] = 0;
        }
        clearconsole();
        printBoard(strecke, redBank, blueBank, ylwBank, greenBank, redHouse, blueHouse, ylwHouse, greenHouse);
        usleep(200000);
        counter++;
    }
}