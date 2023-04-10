#include<stdio.h>
#include<conio.h>
int main()
{
    int low,i;
    printf("enter nmbr ");
    scanf("%d",&low);
    for(i=2;i<low;i++)
    {
        if(low%i==0)
        {
            printf("not prime");
            break;
        }
    }
    if(i==low)
        printf("prime number");
    getch();
    return 0;
}
