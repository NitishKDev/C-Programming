//Next Greater Element (NGE) for every element in given Array
#include<conio.h>
#include<stdio.h>
int main()
{
    int sz,i,j;
    printf("Enter size of array\n");
    scanf("%d",&sz);
    int a[sz];
    int len=sizeof(a)/sizeof(int);
    printf("Enter elements in the array\n");
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]<a[j])
            {
                printf("%d->%d\n",a[i],a[j]);
                break;
            }
            if(j==len+1)
            {
               printf("%d->-1\n",a[i]);
               break;
            }
        }
        if(i==len-1||j==len)
            printf("%d->-1\n",a[i]);
    }
    getch();
    return 0;
}
