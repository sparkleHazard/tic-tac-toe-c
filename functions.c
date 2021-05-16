int playerOne;

int getTeam(){
    printf("Welcome to tic-tac-toe!\nPlayer 1, what team would you like to be? (x/o)");
    scanf("%s", playerOne);
    printf("%s", playerOne);
}

/*void drawGrid(grid)*/

int clearScreen(){
    for(int i = 0; i <= 100; i++)
    { 
        printf(" \n");
    }
}
/*void move()

#void updateGrid()

#int checkResult()

#int announceResult()*/
