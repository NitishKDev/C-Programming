#include<stdio.h>
int length(char *);
void reverse(char *,int);
int main()
{
    char str[100];
    int l,h;
    tryy:
    printf("Enter string \n");
    gets(str);
    l=length(str);
    printf("length of string is %d\n",l);
    reverse(str,l);
    puts(&str[0]);
    printf("Wanna execute again?\npress 1 for yes and 0 for no\n");
    scanf("%d",&h);
    if(h==1)
        goto tryy;
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return(i);
}
void reverse(char *p,int l)
{
    char tmp;
    int i;
for(i=0;i<l/2;i++)
    {
      tmp=*(p+i);
      *(p+i)=*(p+l-i-1);
      *(p+l-i-1)=tmp;
    }
}
