#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char namee[50];
    float salary;
};
struct organization
{
    char name[50];
    int org_id;
    struct employee emp;
};
struct organization input(void);
void output(struct organization);
int main()
{
    struct organization o1;
    o1=input();
    output(o1);
    return 0;
}
struct organization input()
{
    struct organization o2;
    //char strr[100];
    printf("Enter organization details\nEnter organization id ");
    scanf("%d",&o2.org_id);
    printf("Enter organization name ");
    fflush(stdin);
    gets(o2.name);
    printf("\nEnter employee detail\nEnter employee id ");
    scanf("%d",&o2.emp.id);
    fflush(stdin);
    printf("Enter employee name ");
    gets(o2.emp.namee);
    printf("Enter employee salary ");
    scanf("%f",&o2.emp.salary);
    return(o2);
}
output(struct organization o3)
{
   printf("\norganization detail is\norganization id: %d\norganization name: %s\nemployee id: %d\nemployee name: %s\nemployee salary: %f\n",o3.org_id,o3.name,o3.emp.id,o3.emp.namee,o3.emp.salary);
}


