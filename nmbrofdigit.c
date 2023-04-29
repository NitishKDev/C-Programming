#include<stdio.h>
#include<conio.h>
int main()
{
    int num,tmp,cnt=0;
    printf("enter digit\n");
    scanf("%d",&num);
    tmp=num;
    while(tmp!=0)
    {
        tmp=tmp/10;
        cnt=cnt+1;

    }
    printf("number of digit in %d is %d",num,cnt);
    getch();
    return 0;
}
