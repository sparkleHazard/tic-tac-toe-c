#include <stdio.h>
#include "functions.h"

char playerOne;

int main() {
    clearScreen();
    playerOne = getTeam();
    printf("%s\n", &playerOne);
}
