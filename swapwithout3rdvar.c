#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter two number  ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swap: a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter  swap: a=%d and b=%d",a,b);
    getch();
    return 0;
}
