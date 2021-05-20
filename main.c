#include <stdio.h>
#include "functions.h"


int main() {
    char playerOne[1];
    char playerTwo[1];

    clearScreen();
    getTeam(playerOne);
    playerTwoTeam(playerTwo, playerOne);
    
}
