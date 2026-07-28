#include<stdio.h>

void swap(int x, int y){
	int temp = 0;
	temp = x;
	x = y;
	y = temp;

	return ;
}

void swapp(int *x, int *y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
	return ;
}

int main(){

	int a , b;
	a= 2;
	b= 3;
	swap(a,b);
	printf("a = %d b = %d ", a ,b);
	swapp(&a, &b);
  	printf("a = %d b = %d ", a, b);
 return 0;
}
	
