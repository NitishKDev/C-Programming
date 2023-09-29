#include<windows.h>
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y position");
    scanf("%d%d",&x,&y);
    gotoxy(x,y);
    printf("hello");
    getch();
    return 0;
}
void gotoxy(int a,int b)
{
    COORD c;
    c.X=a;
    c.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
