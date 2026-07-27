#include <stdio.h>

void display(void)
{
    auto int x = 10;

    printf("Address : %p\n",(void *)&x);
    printf("Value   : %d\n",x);
}

int main(void)
{
    display();

    display();

    return 0;
}
