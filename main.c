#include <stdio.h>
#include "functions.h"


int main() {
    char playerOne[10];

    clearScreen();
    getTeam(playerOne);
    printf("%s\n", playerOne);
}
