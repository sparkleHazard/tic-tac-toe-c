#include <stdio.h>
#include <unistd.h>
#include "functions.h"


int main() {
    char playerOne[1];
    char playerTwo[1];

    clearScreen();
    getTeam(playerOne);
    playerTwoTeam(playerTwo, playerOne);
    sleep(3);
    clearScreen();

    /*This is to display how the grid is layed out*/
   /* int* gridNum = gridNumber();*/
    char* gridUpdate = gridUpd();

   /* drawGrid(gridNum);
    sleep(2);
    clearScreen();*/
    drawGrid(gridUpdate);

    return 0;
    
}
