//string handling using pointer
#include<stdio.h>
#include<conio.h>
int len(char *);
char* rev(char *,int);
int main()
{
    int lgt;
    char str[20];
    printf("Enter string  ");
    gets(str);
    lgt=len(str);
    printf("length is : %d\n",lgt);
    rev(str,lgt);
    printf(str);
    getch();
    return 0;
}
int len(char *st)
{
    int i;
    for(i=1;*(st+i)!='\0';i++);
    return(i);
}
char* rev(char *rv,int l)
{
    int i;
    char c;
    for(i=0;i<l/2;i++)
    {
        c=*(rv+i);
        *(rv+i)=*(rv+l-1-i);
        *(rv+l-1-i)=c;
    }
}
