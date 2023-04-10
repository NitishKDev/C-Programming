#include<stdio.h>
#include<conio.h>
int main()
{
    int y,x,*ptr1,*ptr2;
    ptr1=&y;
    ptr2=&x;
    printf("enter two number");
    scanf("%d%d",ptr1,ptr2);
    printf("sum is : %d",*ptr1 + *ptr2);
    getch();
    return 0;
}
