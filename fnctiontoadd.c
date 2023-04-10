#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
   int a,b,c;
   printf("enter two number\n");
   scanf("%d%d",&a,&b);
   c=sum(a,b);
   printf("sum=%d",c);
   getch();
    return 0;
}
int sum(int x,int y)
{
    return(x+y);
}

