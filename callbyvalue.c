#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
    int a,b,res;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    res=add(a,b);
    printf("addition of %d and %d = %d",a,b,res);
    getch();
    return 0;
}
int add(int x,int y)
{
        return(x+y);
}

