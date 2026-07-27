#include<stdio.h>

int main()
{
	int arr[5]= {1,20,39,67,45};

	for(int i = 0 ; i <= 5; i ++){
		printf(" %d ", arr[i]);
	}printf("\n");
       for(int i = 0; i <= 5 ;i ++)
       {
	       printf(" %d ", *(arr + i));
       }printf("\n");
       int *p ;
        p = arr;

	for(int i = 0;i <= 5; i ++){
		printf(" %d", *p);
           p++;
	}
return 0;
}
