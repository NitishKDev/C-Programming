#include<stdio.h>
void revrsed(int *,int);
int main()
{
    int size;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size],i;
    printf("Enter elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("original array elements are\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("reversed array elements are\n");
    revrsed(a,size);
}
void revrsed(int *ptr,int sz)
{
    int i,j,revarr[sz];
    for(i=sz-1,j=0;i>=0;i--,j++)
    {
        revarr[j]=*(ptr+i);
    }
    for(i=0;i<sz;i++)
        printf("%d ",revarr[i]);
}
