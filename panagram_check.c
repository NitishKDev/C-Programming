//Program to check pangram and it will return 1 if string is pangram else 0.
#include<stdio.h>
#include<conio.h>
int checkPangram(char *,int);
int main()
{
    int res,len;
    char str[100];
    printf("Enter strings\n");
    gets(str);
    for(len=0;str[len]!='\0';len++);
    res=checkPangram(str,len);
    printf("%d",res);
    getch();
    return 0;
}
int checkPangram(char *ptr,int len)
{
    char lch='a',uch='A';
    int i,j;
    if(len<26)
        return 0;
    else
    {
       for(i=0;*(ptr+i)!='\0';i++)
       {
         for(j=0;*(ptr+j)!='\0';j++)
          {
             if(*(ptr+j)==lch||*(ptr+j)==uch)
             {
              lch=lch+1;
              uch=uch+1;
              break;
             }
          }
         if(lch=='{'||uch=='[')
                return 1;

      }
    }
   if(lch!='{'||uch!=']')
        return 0;
}
