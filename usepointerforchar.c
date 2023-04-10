#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char name[20],*ptr;
    ptr=name;
    printf("enter your name\n ");
        gets(ptr);
        printf("your name is: ");
    for(i=0;name[i]!='\0';i++)
        printf("%c",*(ptr+i));
}
