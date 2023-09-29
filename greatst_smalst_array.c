#include<stdio.h>
int main()
{
    int a[10],i,max,sml;
    printf("enter ten number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0],sml=a[0];
    for(i=1;i<=9;i++)
       {
         if(max<a[i])
          {
            max=a[i];
          }
          if(sml>a[i])
          {
            sml=a[i];
          }
       }
    printf("greatest number is: %d\n",max);
    printf("smallest number is: %d",sml);
    getch();
    return 0;
}
