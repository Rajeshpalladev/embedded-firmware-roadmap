#include <stdio.h>

void led_on(void)
{
    printf("LED ON\n");
}

void buzzer_on(void)
{
    printf("BUZZER ON\n");
}

void motor_on(void)
{
    printf("MOTOR ON\n");
}

int main(void)
{
    void (*actions[3])(void);

    actions[0] = led_on;
    actions[1] = buzzer_on;
    actions[2] = motor_on;

    actions[0]();
    actions[1]();
    actions[2]();

    return 0;
}
