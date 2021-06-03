#include <string.h>


int clearScreen(){
    for(int i = 0; i <= 100; i++)
    { 
        printf(" \n");
    }
    return 0;
}


char* getTeam(char* playerOne){
    
    while   (strcmp(playerOne, "x") != 0 
            && strcmp(playerOne, "o") != 0
            && strcmp(playerOne, "X") != 0
            && strcmp(playerOne, "O") != 0)
    {
        printf("Welcome to tic-tac-toe!\n"
                "Player 1, what team would you like to be? (x/o)\n");
        scanf("%c", playerOne);
        clearScreen();
    }    
    printf("Player 1, you have chosen '%c'!\n", *playerOne);
    
    return playerOne;
}

char* playerTwoTeam(char* playerTwo, char* playerOne){
    if (strcmp(playerOne, "x") == 0 || strcmp(playerOne, "X") == 0){
        playerTwo = "o";
    }else{
        playerTwo = "x";
    }    

    printf("Player 2 is on team '%c'!\n", *playerTwo);
    
    return playerTwo;
}

int drawGrid(){
    printf("-------\n" 
           "|%i|%i|%i|\n"
           "-------\n"
           "|%i|%i|%i|\n"
           "-------\n"
           "|%i|%i|%i|\n"
           "-------\n"
           ,1,2,3,4,5,6,7,8,9);

    return 0;

}

 
/*void move()

#void updateGrid()

#int checkResult()

#int announceResult()*/
