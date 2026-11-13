#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,random,ctr=0,i;
    char wish[20];
    srand(time(NULL));
    random = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the world of Guessing Numbers\n\n");

    do {
        printf("Please enter your guess between(1 and 100): ");
        scanf("%d",&num);

        if(num<1 || num>100)
        {
            printf("WARNING!!\nPlease enter number in its range\n");
        }

        else if(num<random)
        {
            printf("Guess larger number.\n");
        }

        else if(num>random)
        {
            printf("Guess smaller number.\n");
        }

        else
        {
            ctr++;

            printf("Congratulations !! You have successfully guessed the Number in %d attempts\nBye Bye,Thanks for Playing.\nDeveloped by: Harshit Gupta\n\n",ctr);
            printf("Do you want to play this game again(yes/no): ");
            scanf("%19s",wish);

            for(i=0;wish[i]!='\0';i++)
            {
                wish[i]=tolower(wish[i]);
            }

            if(strcmp(wish,"yes")==0)
            {
                ctr=0;
                random = rand() % 100 + 1; // Generate a new random number for the next game
                continue;
            }

            else if(strcmp(wish,"no")==0)
            {
                printf("Thanks");
                return 0;
            }

        }

        ctr++;

    } while(1);

}