/*C program to read a one dimensional array, print sum of all elements along
with inputted array elements using Dynamic Memory Allocation*/
#include<stdio.h>
int main()
{
    int *ptr;
    int size,sum=0,i;
    printf("Enter array size\n");
    scanf("%d",&size);
    ptr=(int*)malloc(size*(sizeof(int)));
    if(ptr==NULL)
    {
        printf("Insufficient memory...Exiting");
        return 0;
    }
    printf("Enter %d elements in array\n",size);
    for(i=0;i<size;i++)
        scanf("%d",ptr+i);
    printf("Array elements are:");
    for(i=0;i<size;i++)
        printf("%d ",*(ptr+i));
    for(i=0;i<size;i++)
        sum=sum+ *(ptr+i);
    printf("\nSum of array elements are: %d",sum);
    free(ptr);
    return 0;
}
