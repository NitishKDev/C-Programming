//palindrome program
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[20],c;
    int i,len;
    printf("enter string for checking paindrome\n");
    scanf("%s",&s[0]);
    for(i=0;s[i]!='\0';i++);
    len=i;
    for(i=0;i<len/2;i++)
    {
       //c=s[i];
       if(s[i]!=s[len-1-i])
         {
             printf("not palindrome");
             break;
         }
       //s[len-1-i]=c;
    }
    if(i==len/2)
    printf("palindrome");
    getch();
    return 0;
}
