#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter coefficient of x^2,x^1 and constant");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("\n both roots are real and distinct\nr1=%f  r2=%f",r1,r2);
    }
    if(d==0)
    {
        r1=-b/(2.0*a);
        r2=r1;
        printf("\n both roots are real and equal\nr1=%f  r2=%f",r1,r2);
    }
    if(d<0)
    {
       printf("\n both roots are imaginary\n");
    }
    getch();
    return 0;
}
