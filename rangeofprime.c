#include<stdio.h>
#include<conio.h>
int main()
{
    int low,high,i,j;
    printf("enter low and high ");
    scanf("%d%d",&low,&high);
    printf("prime number between %d and %d are:\n",low,high);
    for(j=low+1;j<high;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            break;
        }
        if(i==j)
            printf("%d  ",j);
    }
    getch();
    return 0;
}
