#include<stdio.h>
#include<conio.h>
int main()
{
    int c,i;
    lab:printf("enter integer 1 or 2 or 3 or 4 only\n");
    c=getch();
    if(c==49||c==50||c==51||c==52)
       i=c;
    else
      {
        system("cls");
        goto lab;
      }
        if(i==49)
            i=1;
        else if(i==50)
            i=2;
        else if(i==51)
            i=3;
        else
            i=4;
    printf("c=%d  i=%d",c,i);
    getch();
    return 0;
}
