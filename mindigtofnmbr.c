//finding smallest digit from number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,tmp,min,d1;
    printf("enter number\n");
    scanf("%d",&num);
    tmp=num;
    min=9;
    while(tmp!=0)
    {
        d1=tmp%10;
        if(min>d1)
            min=d1;
        tmp=tmp/10;
    }
    printf("minimum digit in %d is %d",num,min);
    getch();
    return 0;
}
