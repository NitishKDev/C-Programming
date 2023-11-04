#include<stdio.h>
int main()
{
    int size,t,i,j;
    printf("enter size of array");
    scanf("%d",&size);
    int a[size];
    printf("enter elements into array");
     for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("enter target");
    scanf("%d",&t);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if((a[i]+a[j])==t)
            {
                printf("[%d,%d]\n",i,j);
            }
        }
    }
    return 0;
}
