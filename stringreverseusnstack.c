#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int lengthofstring(void);
void stringreverse(void);
#define sz 20
char stack[sz];
int top=0;
int main()
{
printf("enter string...\n");
gets(&stack[top]);
printf("length of string is:%d",lengthofstring());
stringreverse();
getch();
return 0;
}
int lengthofstring()
{
   while(stack[top]!='\0')
      top++;
    return top;
}
void stringreverse()
{
    while(stack[top]!='\0')
      top++;
    printf("\nreverse string is: ");
    while(top!=-1)
     {
      printf("%c",stack[top-1]);
      top--;
     }
}
