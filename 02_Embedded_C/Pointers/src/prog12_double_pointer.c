#include <stdio.h>

int main(void)
{
    int x = 50;

    int *p = &x;

    int **pp = &p;

    printf("x      = %d\n", x);

    printf("&x     = %p\n", (void *)&x);

    printf("p      = %p\n", (void *)p);

    printf("*p     = %d\n", *p);

    printf("&p     = %p\n", (void *)&p);

    printf("pp     = %p\n", (void *)pp);

    printf("*pp    = %p\n", (void *)*pp);

    printf("**pp   = %d\n", **pp);

    return 0;
}
