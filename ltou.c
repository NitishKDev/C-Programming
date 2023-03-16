//lower to upper
#include<stdio.h>
#include<conio.h>
int main()
{
    char c[10];
    int i;
    printf("enter character\n");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        printf("%c",c[i]-32);
    }
    getch();
    return 0;
}
