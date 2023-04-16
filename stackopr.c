#include<stdio.h>
#include<conio.h>
#define size 5
void push(void);
void pop(void);
void display(void);
int stack[size];
int top=-1;
int main()
{
     while(1)
    {
        system("cls");
        int ch;
        printf("\nenter 1 for push\n 2 for pop\n 3 for displaying\n 4 for exit\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:push();break;
          case 2:pop();break;
          case 3:display();break;
          case 4:exit(0);
          default:printf("enter valid choice");
        }
        getch();
    }
}
void push()
{
    if(top==size-1)
        printf("\nstack is full");
    else
        {
         top++;
         printf("\nenter element");
        scanf(" %d",&stack[top]);
        }
}
void pop()
{
    if(top==-1)
        printf("\nstack is empty");
    else
    {
        printf("\nelement deleted is %d",stack[top]);
        top--;
    }
}
void display()
{
  int i;
    if(top==-1)
        printf("\nstack is empty");
    else
    {
        printf("\nelements are:\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
