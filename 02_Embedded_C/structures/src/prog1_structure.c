#include<stdio.h>

struct employee
{
	int age ;
	float salary;
	char grade;
};

int main(void)
{
	struct employee emp1;
	emp1.age = 22;
	emp1.salary = 60000.9;
	emp1.grade = 'A';

	printf("age : %d\n", emp1.age);
	printf("salary: %.2f\n", emp1.salary);
	printf("grade: %c\n", emp1.grade);


	return 0;
}

