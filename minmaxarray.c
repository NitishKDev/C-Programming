//finding min and max number from array of users size
#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int minmax[size],i,j,min,max;
    printf("enter elements in array\n");
    for(i=0;i<size;i++)
    scanf("%d",&minmax[i]);
    min=max=minmax[0];
    for(j=1;j<size;j++)
    {
        if(min>minmax[j])
            min=minmax[j];
        if(max<minmax[j])
            max=minmax[j];

    }
    printf("min=%d and max=%d",min,max);
    getch();
    return 0;
}
