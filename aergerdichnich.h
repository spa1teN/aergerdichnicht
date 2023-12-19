#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define RED "\e[1;31m"
#define BLU "\e[1;34m"
#define YLW "\e[1;33m"
#define GRN "\e[1;32m"
#define RESET "\e[0m"

void clearconsole(){
    printf("\e[1;1H\e[2J");
}

void printCell(int cellValue){
    if(cellValue == 0){
        printf("+ ");
    }if(cellValue == 1){
        printf(RED "O " RESET);
    }if(cellValue == 2){
        printf(BLU "O " RESET);
    }if(cellValue == 3){
        printf(YLW "O " RESET);
    }if(cellValue == 4){
        printf(GRN "O " RESET);
    }
}
void printBank(int coordinate, int value, int clr){
    if(coordinate <= value){
        if(clr == 1){
            printf(RED "O " RESET);
        }if(clr == 2){
            printf(BLU "O " RESET);
        }if(clr == 3){
            printf(YLW "O " RESET);
        }if(clr == 4){
            printf(GRN "O " RESET);
        }
    }else{
        printf("+ ");
    }
}
void printHouse(int coordinate, int value, int clr){
    if(coordinate <= value){
        if(clr == 1){
            printf(RED "O " RESET);
        }if(clr == 2){
            printf(BLU "O " RESET);
        }if(clr == 3){
            printf(YLW "O " RESET);
        }if(clr == 4){
            printf(GRN "O " RESET);
        }
    }else{
        if(clr == 2 || clr == 3){
            printf("| ");
        }if(clr == 1 || clr == 4){
            printf("- ");
        }
    }
}

void printBoard(int strecke[40], int red, int blue, int yellow, int green, int redHouse, int blueHouse, int ylwHouse, int greenHouse){
    //Zeile 1
    printBank(1, red, 1);
    printBank(2, red, 1);
    printf("    ");
    printCell(strecke[0]);
    printCell(strecke[1]);
    printCell(strecke[2]);
    printf("    ");
    printBank(1, blue, 2);
    printBank(2, blue, 2);
    printf("\n");
    //Zeile 2
    printBank(3, red, 1);
    printBank(4, red, 1);
    printf("    ");
    printCell(strecke[39]);
    //printf(" ");
    printHouse(4, blueHouse, 2);
    printCell(strecke[3]);
    printf("    ");
    printBank(3, blue, 2);
    printBank(4, blue, 2);
    printf("\n");
    //Zeile 3
    printf("        ");
    printCell(strecke[38]);
    //printf(" ");
    printHouse(3, blueHouse, 2);
    printCell(strecke[4]);
    printf("        \n");
    //Zeile 4
    printf("        ");
    printCell(strecke[37]);
    //printf(" ");
    printHouse(2, blueHouse, 2);
    printCell(strecke[5]);
    printf("        \n");
    //Zeile 5
    printCell(strecke[32]);
    printCell(strecke[33]);
    printCell(strecke[34]);
    printCell(strecke[35]);
    printCell(strecke[36]);
    //printf(" ");
    printHouse(1, blueHouse, 2);
    printCell(strecke[6]);
    printCell(strecke[7]);
    printCell(strecke[8]);
    printCell(strecke[9]);
    printCell(strecke[10]);
    printf("\n");
    //Zeile 6
    printCell(strecke[31]);
    printHouse(4, redHouse, 1);
    printHouse(3, redHouse, 1);
    printHouse(2, redHouse, 1);
    printHouse(1, redHouse, 1);
    printf("  ");
    printHouse(1, greenHouse, 4);
    printHouse(2, greenHouse, 4);
    printHouse(3, greenHouse, 4);
    printHouse(4, greenHouse, 4);
    printCell(strecke[11]);
    printf("\n");
    //Zeile 7
    printCell(strecke[30]);
    printCell(strecke[29]);
    printCell(strecke[28]);
    printCell(strecke[27]);
    printCell(strecke[26]);
    //printf(" ");
    printHouse(1, ylwHouse, 3);
    printCell(strecke[16]);
    printCell(strecke[15]);
    printCell(strecke[14]);
    printCell(strecke[13]);
    printCell(strecke[12]);
    printf("\n");
    //Zeile 8
    printf("        ");
    printCell(strecke[25]);
    //printf(" ");
    printHouse(2, ylwHouse, 3);
    printCell(strecke[17]);
    printf("        \n");
    //Zeile 9
    printf("        ");
    printCell(strecke[24]);
    //printf(" ");
    printHouse(3, ylwHouse, 3);
    printCell(strecke[18]);
    printf("        \n");
    //Zeile 10
    printBank(1, yellow, 3);
    printBank(2, yellow, 3);
    printf("    ");
    printCell(strecke[23]);
    //printf(" ");
    printHouse(4, ylwHouse, 3);
    printCell(strecke[19]);
    printf("    ");
    printBank(1, green, 4);
    printBank(2, green, 4);
    printf("\n");
    //Zeile 11
    printBank(3, yellow, 3);
    printBank(4, yellow, 3);
    printf("    ");
    printCell(strecke[22]);
    printCell(strecke[21]);
    printCell(strecke[20]);
    printf("    ");
    printBank(3, green, 4);
    printBank(4, green, 4);
    printf("\n");
    
}
