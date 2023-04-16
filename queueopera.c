#include<stdio.h>
#include<conio.h>
#define size 5
void enqueue(void);
void dequeue(void);
void display(void);
int que[size];
int front=-1,rear=-1;
int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("\nenter 1 for insertion\n 2 for deletion\n 3 for displaying\n 4 for exit\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:enqueue();break;
          case 2:dequeue();break;
          case 3:display();break;
          case 4:exit(0);
          default:printf("enter valid choice");
        }
        getch();
    }
}
void enqueue()
{
    if(rear==size-1)
        printf("\nqueue is full");
    else if(front==-1&&rear==-1)
    {
        int x;
        front=0;
        rear=0;
        printf("\nenter element");
        scanf("  %d",&x);
        que[rear]=x;
    }
    else
    {
        int x;
        printf("\nenter element");
        scanf("%d",&x);
        rear++;
        que[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
        printf("\nquueue is empty");
    else if(front>rear)
    {
        printf("\nquueue is empty");
        front=rear=-1;
    }
    else
    {
        printf("\ndeleted element is  %d",que[front]);
        front++;
    }

}
void display()
{
    int i;
    if(front==-1&&rear==-1)
        printf("\nquueue is empty");
    else
        {
        for(i=front;i<=rear;i++)
        printf("%d  ",que[i]);
        }
}
