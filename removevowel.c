#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    int i;
    printf("enter string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U')
        printf("%c",str[i]);

    }
    getch();
    return 0;
}
