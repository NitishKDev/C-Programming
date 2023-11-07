#include<stdio.h>
int main()
{
    printf("Lets find which elements is peak element\n");
    int size,count;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size],i;
    printf("Enter elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("peak elements are\n");
    for(i=0;i<size;i++)
    {
        if(i==0)
        {
            if(a[i]>a[i+1])
                printf("%d",a[i]);
        }
        if((i>0)&&(i<size-1))
        {
            if((a[i]>a[i-1])&&a[i]>a[i+1])
                printf("%d\n",a[i]);
        }
        if(i==size-1)
        {
            if(a[i]>a[i-1])
            {
                printf("%d\n",a[i]);
            }
        }
    }
    for(i=0;i<size-1;i++)
    {
        if(a[i]!=a[i+1])
        {
          break;
        }
        else
        {
            count++;
        }
    }
    if(count==size-1)
    {
        printf("All elements are peak elements\n");
    }
    return 0;
}
