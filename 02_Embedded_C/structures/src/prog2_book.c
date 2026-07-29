#include<stdio.h>
#include<string.h>

struct book
{
	char title[30];
	int pages;
	float price;
};

int main(void)
{
	struct book b1;
	struct book b2;

	strcpy(b1.title, "rajesh");
	b1.pages = 600;
	b1.price = 7000;

       strcpy(b2.title, "palla");
	b2.pages = 900;
	b2.price = 8000;

	printf("b1 title = %s\n", b1.title);
	printf("b2 title = %s\n", b2.title);
	return 0;
}
