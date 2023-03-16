//check uppercase,lowercase,digit,and special character
#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("enter one character");
    scanf("%c",&c);
   //for(i=48;i<=57;i++)
    if(c>=48&&c<=57)
        printf("digit");
    else if(c>=65&&c<=90)
        printf("uppercase");
    else if(c>=97&&c<=122)
        printf("lowercase");
        else
            printf("special character");
    getch();
    return 0;
}
