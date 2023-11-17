#include<stdio.h>
#include<conio.h>
typedef struct person{
int citizenship_no;
char name[20];
float salary;
}pers;
pers input(void);
void output(pers);
int main()
{
    pers p1;
    p1=input();
    output(p1);
    return 0;
}
pers input()
{
    pers p2;
    char strr[100];
    printf("Enter person details\nEnter citizenship number\n");
    scanf("%d",&p2.citizenship_no);
    printf("Enter name\n");
    fflush(stdin);
    gets(p2.name);
    printf("Enter salary\n");
    scanf("%f",&p2.salary);
    return(p2);
}
output(pers p3)
{
   printf("\nPerson detail is\ncitizenship_no: %d\nName: %s\nSalary: %f",p3.citizenship_no,p3.name,p3.salary);
}



