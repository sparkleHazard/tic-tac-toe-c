#include <string.h>

char getTeam(char* playerOne){
    
    while(strcmp(playerOne, "x") != 0 
            && strcmp(playerOne, "o") != 0
            && strcmp(playerOne, "X") != 0
            && strcmp(playerOne, "O") != 0)
    {
        printf("Welcome to tic-tac-toe!\n"
                "Player 1, what team would you like to be? (x/o)");
        scanf("%s", playerOne);
    }
    return *playerOne;
}

/*void drawGrid(grid)*/

int clearScreen(){
    for(int i = 0; i <= 100; i++)
    { 
        printf(" \n");
    }
    return 0;
}
/*void move()

#void updateGrid()

#int checkResult()

#int announceResult()*/
