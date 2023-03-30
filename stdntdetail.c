#include<stdio.h>
#include<conio.h>
struct studnt
{
    char name[20];
    int roll;
    int age;
};
int main()
{
    struct studnt s1;
    printf("enter stuent name");
    gets(s1.name);
    printf("enter stuent roll");
    scanf("%d",&s1.roll);
    printf("enter stuent age");
    scanf("%d",&s1.age);
    printf("students details are:\nname is %s\nroll is %d\nage is %d",s1.name,s1.roll,s1.age);
    getch();
    return 0;
}
