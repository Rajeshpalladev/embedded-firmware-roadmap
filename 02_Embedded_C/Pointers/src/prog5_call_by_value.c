#include <stdio.h>

void increment(int x)
{
    x++;

    printf("Inside function : %d\n", x);
}

int main(void)
{
    int number = 10;

    increment(number);

    printf("Main : %d\n", number);

    return 0;
}
