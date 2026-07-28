#include <stdio.h>

void print_array(int arr[], int size)
{
	arr[0] = 100;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    print_array(numbers, 5);

    return 0;
}
