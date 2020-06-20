#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

struct employee
{
	char name[20];
	unsigned int id;
	float salary;
	char grade;
	char gender;
};
int main()
{
	
	struct employee e1={"shiva",204,20000,'A','M'};
	struct employee e2={"hari",206,20200,'B','M'};
	struct employee e3;
	e3=e1;
	e1=e2;
	e2=e3;

printf("e2.employee name :%s\n",e2.name);
printf("e2employee id :%d\n",e2.id);
printf("e2employee salary :%.2f\n",e2.salary);
printf("e2employee grade :%c\n",e2.grade);
printf("e2employee gender :%c\n",e2.gender);

printf("e1.employee name :%s\n",e1.name);
printf("e1employee id :%d\n",e1.id);
printf("e1employee salary :%.2f\n",e1.salary);
printf("e1employee grade :%c\n",e1.grade);
printf("e1.employee gender :%c\n",e1.gender);
}
