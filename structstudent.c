#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    int age;
};
struct student input(void);
void display(struct student);
int main()
{
    struct student s1;
    s1=input();
    display(s1);
    getch();
    return 0;

}
struct student input()
{
    struct student s2;
    printf("enter your name  ");
    gets(s2.name);
    printf("enter your roll  ");
    scanf("%d",&s2.roll);
    printf("enter your age  ");
    scanf("%d",&s2.age);
    return s2;
    }
    void display(struct student s3)
    {
    printf("\nstudent details are:\n");
    printf("%s\n%d\n%d",s3.name,s3.roll,s3.age);

    }

