#include<stdio.h>
#include<conio.h>
int main()
{
    int num,res=0,c=1;
    printf("enter any number\n");
    scanf("%d",&num);
    for(c=1;c<=10;c++)
        printf("%d*%d=%d\n",num,c,num*c);
    getch();
    return 0;
}
