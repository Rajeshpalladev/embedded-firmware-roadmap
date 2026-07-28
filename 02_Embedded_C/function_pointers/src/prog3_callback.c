#include <stdio.h>

void ledon(void)
{
	printf("led on\n");
}

void ledoff(void)
{
	printf("led off\n");
}

void button_pressed(void (*callback)(void))
{
	printf("button pressed ");

	callback();
}

int main(void)
{
	button_pressed(ledon);
	button_pressed(ledoff);

	return 0;
}
