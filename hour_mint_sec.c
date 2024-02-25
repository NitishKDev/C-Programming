//Program to take positive integer from user and output it in hour,minute and second.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,hour,mint,sec;
    char ch;
    printf("Enter integer(seconds)\n");
    while(1)
    {
        ch=getch();
        if(ch>=48&&ch<=57)
        {
          num=num*10+(ch-48);
          printf("%c",ch);
        }
        if(ch==13)
            break;
    }
    printf("\nYour number is %d",num);
    hour=num/3600;
    num=num-(hour*3600);
    mint=num/60;
    num=num-(mint*60);
    sec=num;
    printf(" i.e, %d hour %d minute %d second ",hour,mint,sec);
    getch();
    return 0;
}
