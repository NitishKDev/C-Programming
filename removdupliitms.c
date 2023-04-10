//removing duplicate item from array while printing
#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int a[size],i=0,k,j;
    printf("enter elements in array\n");
    for(k=0;k<size;k++)
        scanf("%d",&a[k]);
    printf("array elements after removing duplicate items are : \n%d ",a[i]);
    for(i=1;i<size;i++)
    {
        for(j=i-1;j>=0;j--)
        {
           if(a[i]==a[j])
            break;
         }
           if(j==-1)
          printf("%d  ",a[i]);
    }
    getch();
    return 0;
}
