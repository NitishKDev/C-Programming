//program to count the number of words in a given string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i,cnt=1;
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            ++cnt;
    }
    printf("\nNumber of words in the given string is %d",cnt);
    getch();
    return 0;
}
