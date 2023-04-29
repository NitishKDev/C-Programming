#include<stdio.h>
#include<conio.h>
void checkarm(int);
void rangeprint(int);
int main()
{
    int num,flag;
    printf("enter number for checking armstrong  ");
    scanf("%d",&num);
    checkarm(num);
    printf("\nenter highest number upto you wanna print armstrong number ");
    scanf("%d",&flag);
    rangeprint(flag);
    getch();
    return 0;
}
void checkarm(int num1)
{
    int tmp,m,s=0;
    tmp=num1;
    while(tmp!=0)
    {
        m=tmp%10;
        s=s+m*m*m;
        tmp=tmp/10;
    }
    if(s==num1)
        printf("%d is armstrong nmber",num1);
    else
        printf("%d is not armstrog number",num1);
}
void rangeprint(int ran)
{
    printf("\narmstrong number are:\n ");
    int i,tmp1,m1,s1;
    for(i=0;i<=ran;i++)
    {
        tmp1=i;
        s1=0;
        while(tmp1!=0)
        {
        m1=tmp1%10;
        s1=s1+m1*m1*m1;
        tmp1=tmp1/10;
        }
        if(s1==i)
            printf("%d ",i);
    }

}
