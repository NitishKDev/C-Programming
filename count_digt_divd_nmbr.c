//Count the digits that divide a number
#include<stdio.h>
#include<conio.h>
int count(int);
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Number is %d",count(num));
    getch();
    return 0;
}
int count(int x)
{
    int y=x,cnt=0,m;
    while(y!=0)
    {
        m=y%10;
        if(x%m==0)
            cnt++;
        y=y/10;
    }
    return cnt;
}
