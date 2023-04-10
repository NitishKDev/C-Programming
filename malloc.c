#include<stdio.h>
#include<conio.h>
int main()
{
    int *ptr,i;
    ptr=(int*)malloc(4*sizeof(int));
    for(i=0;i<4;i++)
    {
    printf("\nenter numbr\n");
    scanf("%d",ptr+i);
    printf("your number is %d",*(ptr+i));
    }
    getch();
    free(ptr);
    return 0;
}
