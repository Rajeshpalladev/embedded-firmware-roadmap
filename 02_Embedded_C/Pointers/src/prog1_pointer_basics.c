#include<stdio.h>

int  main(void)
{
	int number = 25;

	int *ptr = &number;


    printf("Value of number        : %d\n", number);
    printf("Address of number      : %p\n", (void *)&number);

    printf("Value stored in ptr    : %p\n", (void *)ptr);

    printf("Value pointed by ptr   : %d\n", *ptr);

    return 0;
}	
