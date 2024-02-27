//Program to create own square root function.
#include<stdio.h>
#include<conio.h>
int mysqrt(int);
int main()
{
    int num,res;
    printf("Enter number\n");
    scanf("%d",&num);
    res=mysqrt(num);
    printf("Square root is %d",res);
    getch();
    return 0;
}
int mysqrt(int x)
{
    long long int r;
    if(x==1)
        return 1;
    else
        {
      r=x/2;
      while(r*r>x)
        r--;
     return(r);
    }
}
