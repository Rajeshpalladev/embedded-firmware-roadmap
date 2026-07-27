#include<stdio.h>
#include<stdlib.h>

int global_init = 100;
int global_uninit ;

int main(void)
{
	int local_variable = 10;
	int *heap_variable = malloc(sizeof(int));

	if(heap_variable == NULL)
	{
	      return 1;
	}
	*heap_variable = 50;

	  printf("Address of global_init    : %p\n", (void *)&global_init);
    printf("Address of global_uninit        : %p\n", (void *)&global_uninit);
    printf("Address of local_variable       : %p\n", (void *)&local_variable);
    printf("Address of heap_variable        : %p\n", (void *)heap_variable);

    free(heap_variable);

    return 0;
}
