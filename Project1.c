#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int r = (rand() % 100) + 1;
    int nog = 0;
    int g;
    do
    {
        printf(" Guess the number ");
        scanf("%d", &g);
        if (g > r)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("Higher number please\n");
        }
        nog++;
    } while (g != r);

    printf("You guessed the number in %d guesses", nog);
    return 0;
}