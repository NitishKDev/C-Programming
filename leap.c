#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter any year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
          printf("leap year");
        else
           printf("not leap year");
    }
    else
    {
        if(year%4==0)
        printf("leap year");
       else
        printf("not leap year");
    }
    getch();
    return 0;
}
