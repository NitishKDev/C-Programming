#include<stdio.h>
#include<conio.h>
#define size 5
int queue[size];
int front=-1;
int rear =-1;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
    while(1)
    {
    system("cls");
    int ch;
    printf("enter 1 for enqueue\n enter 2 for dequeue\n enter 3 for display\n enter 4 for exit\n");
    printf("enter choice\n");
    scanf("%d",&ch);
    switch(ch)
      {
        case 1:enqueue();break;
        case 2:dequeue();break;
        case 3:display();break;
        case 4:exit(0);
        default:printf("\nenter valid choice");
      }
    }
    getch();
    return 0;

}
void enqueue()
{
    int ele;
    printf("\nenter element");
    scanf("%d",&ele);
    if(rear==size-1)
        printf("\nqueue is full");
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=ele;
    }
    else
    {
        rear++;
        queue[rear]=ele;
    }
    getch();
}
void dequeue()
{
    if(rear==-1&&front==-1)
        printf("\nqueue is empty");
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\ndeleted elements are: %d",queue[front]);
        front++;
    }
    getch();
}
void display()
{
    int i;
    printf("\nqueue elements are:\n");
    for(i=front;i<=rear;i++)
        printf("%d  ",queue[i]);
getch();
}
