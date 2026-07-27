#include <stdio.h>

int main(void)
{
    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    printf("arr[0] = %d\n", arr[0]);
    printf("*p     = %d\n", *p);

    p++;

    printf("After p++\n");

    printf("*p     = %d\n", *p);

    return 0;
}
