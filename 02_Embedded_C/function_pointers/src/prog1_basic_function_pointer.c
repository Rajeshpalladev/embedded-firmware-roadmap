#include <stdio.h>

void display(void)
{
	printf("hello firmware\n");
}


int main(void)
{
	void (*ptr)(void);

	ptr = display;

	ptr();
	return 0;
}
