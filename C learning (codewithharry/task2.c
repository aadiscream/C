#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user;
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 2
    int computer = rand() % 3;
    printf("0 FOR STONE \n1 FOR PAPER \n2 FOR SCISSOR\n");
    scanf("%d", &user);
    if (user == 0 && computer == 0)
    {
        printf("it is a draw ");
    }
    else if (user == 0 && computer == 1)
    {
        printf("computer won, try again !");
    }
    else if (user == 0 && computer == 2)
    {
        printf("you won ");
    }
    else if (user == 1 && computer == 0)
    {
        printf("you won ");
    }
    else if (user == 1 && computer == 1)
    {
        printf("it is a draw ");
    }
    else if (user == 1 && computer == 2)
    {
        printf("computer won, try again !");
    }
    else if (user == 2 && computer == 0)
    {
        printf("computer won, try again !");
    }
    else if (user == 2 && computer == 1)
    {
        printf("you won ");
    }
    else if (user == 2 && computer == 2)
    {
        printf("it is a draw ");
    }
    else
    {
        printf(" something went wrong ");
    }

    return 0;
}
