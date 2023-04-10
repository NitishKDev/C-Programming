//insert elements at specific position in array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,ele,pos;
    printf("enter size of array\n");
    scanf("%d",&size);
    int a[size],i;
    for(i=1;i<=size;i++)
    {
    printf("enter position where you wanna insert element\n");
    scanf("%d",&pos);
    printf("enter elements\n");
    scanf("%d",&ele);
    a[pos]=ele;
    }
    printf("array elements are..\n");
    for(i=1;i<=size;i++)
        printf(" %d ",a[i]);
getch();
return 0;
}
