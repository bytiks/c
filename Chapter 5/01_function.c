#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1, b = 2;
    int c = sum(a, b);
    printf("%d\n", c);

    int a1 = 4, b1 = 5;
    sum(a1, b1);
    return 0;
}