#include<stdio.h>
#include<conio.h>
int main()
{
    int i,*ptr;
    ptr=(int*)calloc(4,sizeof(int));
    getch();
    free(ptr);
    return 0;
}
