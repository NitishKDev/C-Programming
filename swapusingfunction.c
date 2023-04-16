#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("before swap:a=%d  b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap: a=%d  b=%d",a,b);
    getch();
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
