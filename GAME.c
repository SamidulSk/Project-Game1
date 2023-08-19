//NUMBER GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;  //generate a random number between 1 to 100
    //printf("The number is %d\n",number);
    //keep runing the loop until the number is gussed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed in %d attempts",nguess);
        }
        nguess++;
    }
    while (guess!=number);
   
return 0;
}