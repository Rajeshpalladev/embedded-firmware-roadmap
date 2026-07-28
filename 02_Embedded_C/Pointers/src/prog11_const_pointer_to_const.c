#include <stdio.h>

int main(void)
{
    int value = 10;

    const int *const ptr = &value;

    printf("%d\n", *ptr);

    return 0;
}
