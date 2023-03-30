#include<stdio.h>
#include<conio.h>
int main()
{
    double num;
    printf("enter any number");
    scanf("%lf",&num);
    if(num<=0.0)
    {
        if(num==0.0)
           printf("number is %lf",num);
        else
            printf("%lf is negative",num);
    }
    else
        printf("%lf is positive",num);
    getch();
    return 0;
}
