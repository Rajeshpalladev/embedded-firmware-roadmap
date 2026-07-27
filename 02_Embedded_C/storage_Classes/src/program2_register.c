#include <stdio.h>

int main(void)
{
    register int counter;

    for (counter = 1; counter <= 5; counter++)
    {
        printf("%d\n", counter);
        printf("%p\n", (void *)&counter);
    }

    return 0;
}
