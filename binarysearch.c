#include<stdio.h>
#include<conio.h>
void bins(int *,int,int);
int main()
{
    int sz,*ptr,key,i;
    printf("enter size of the array");
    scanf("%d",&sz);
    int arr[sz];
   printf("enter elements in the array");
    for(i=1;i<=sz;i++)
    {
   l2: scanf("%d",&arr[i]);
      if(i>1)
       {
        if(arr[i]<arr[i-1])
          {
            printf("next element must be greater than previous\nclick any button and enter element again");
            getch();
            system("cls");
            goto l2;
           }
        }

    }
    printf("\nyour entered elements...\n");
    for(i=1;i<=sz;i++)
        printf("%d  ",arr[i]);
    printf("\nenter the search key element");
    scanf("%d",&key);
    ptr=&arr[1];
    bins(ptr,key,sz);
    getch();
    return 0;
}
void bins(int *ptr,int kie,int high)
{
    int low=1,mid;
    while(low<=high)
    {
       mid=(low+high)/2;
       if(kie==*(ptr+mid-1))
       {
           printf("element found at index %d ",mid);
           break;
       }
       else if(kie<*(ptr+mid-1))
       {
           high=mid-1;
       }
       else
       {
        if(kie>*(ptr+mid-1))
           low=mid+1;
       }
    }
    if(low>high)
         printf("oppps...search element is not in the array");

}

