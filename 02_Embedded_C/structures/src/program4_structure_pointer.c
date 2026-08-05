#include <stdio.h>

struct student
{
	int roll;
	float marks;
};

int main(){

	struct student s1;

	struct student *p = &s1;

	p->roll = 21;
	p->marks = 88.6;

	printf("%d %f\n", p->roll,p->marks);

	return 0;
}
