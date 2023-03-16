//binaary to wdecmial
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,i,m,s=0,p;
    printf("enter binary number");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
    m=a%10;
    p=pow(2,i);
    s=s+m*p;
    a=a/10;
    }
    printf("%d",s);
    getch();
    return 0;
}
