#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char str[20],t;
    int i,len;
    printf("enter string\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        t=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=t;
    }
    puts(str);
    getch();
    return 0;
}
