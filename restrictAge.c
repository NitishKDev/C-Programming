//integer only
#include<stdio.h>
#include<conio.h>
int main()
{
    int age=0,b;
    printf("enter your age\n");
       do
       {
       b=getch();
       if(b>=48&&b<=57)
        {
        printf("%c",b);
        age=age*10+(b-48);
       }
       if(b==13)
        break;
    }while(1);
    printf("\nage=%d",age);
    getch();
    return 0;
}
