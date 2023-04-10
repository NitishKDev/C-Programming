#include<stdio.h>
#include<conio.h>
void decitooctal(int);
 int binarytodecimal(int);
int main()
{
   int bin,dec;
    printf("enter binary number\n");
    scanf("%d",&bin);
    dec=binarytodecimal(bin);
   decitooctal(dec);
   getch();
   return 0;
}
   int binarytodecimal(int a)
   {
       int i,m,p,deci=0;
    for(i=0;a!=0;i++)
    {
    m=a%10;
    p=pow(2,i)*m;
    deci=deci+p;
    a=a/10;
    }
    printf("binary to decimal=%d\n",deci);
    return(deci);
   }
   void decitooctal(int sum)
    {
        int k,j,m1,top=0,aa[10];
    for(j=0;sum>=8;j++)
    {
    m1=sum%8;
    aa[j]=m1;
    top=j+1;
    sum=sum/8;
    }
    aa[top]=sum;
    printf("decimal to octal= ");
    for(k=top;k>=0;k--)
    printf("%d",aa[k]);
}
