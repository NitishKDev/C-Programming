#include<stdio.h>
#include<conio.h>
int input(void);
void disp(int);
int main()
{
    int k;
    k=input();
    disp(k);
    getch();
    return 0;
}
int input()
{
    int  num;
    printf("enter number of fibo series you wanna see\n");
    scanf("%d",&num);
    return(num);
}
void disp(int nmb)
{
    int a=0,b=1,c,i=1;
    printf("fibonacci series are:\n%d %d",a,b);
    while(i<=nmb-2)
    {
    c=a+b;
    printf(" %d",c);
    a=b;
    b=c;;
    i++;
    }
}
