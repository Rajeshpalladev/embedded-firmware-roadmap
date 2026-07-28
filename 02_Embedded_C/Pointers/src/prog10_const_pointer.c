#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    int *const ptr = &a;

    *ptr = 100;

    printf("%d\n", a);

    return 0;
}
