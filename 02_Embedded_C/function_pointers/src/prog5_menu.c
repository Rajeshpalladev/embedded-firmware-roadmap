#include <stdio.h>

void led_on(void)
{
	printf("led on\n");
}
void led_off(void)
{
	printf("led_off\n");
}
void buzzer_on(void)
{
	printf("buzzer_on\n");
}
void motor_on(void)
{
	printf("motor_on\n");
}

int main(void)
{
	void (*fp[])(void) = 
	{
		led_on,led_off,buzzer_on,motor_on
	};

	for(int i = 0; i <= 3; i ++){
		fp[i]();
	}
	return 0;
}
