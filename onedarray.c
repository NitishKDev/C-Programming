#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    printf("enter array size\n");
    scanf("%d",&size);
    int a[size],i;
    printf("enter elements in array");
    for(i=0;i<size;i++)
    {
        printf("\nelement %d=",i);
        scanf("%d",&a[i]);
    }
    printf("entered elements are::\n");
    for(i=0;i<size;i++)
        printf("element %d=%d\n",i,a[i]);
    getch();
    return 0;
}
