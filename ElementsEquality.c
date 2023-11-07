#include<stdio.h>
int main()
{

     int size,count=0;
    printf("Lets check whether all elements of array are equal or not\n");
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size],i;
    printf("Enter elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
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
        printf("all array elemets are equal\n");
    else
        printf("all array elemets are not equal\n");
    return 0;

}
