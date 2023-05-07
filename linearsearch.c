#include<stdio.h>
#include<conio.h>
void lins(int *,int,int);
int main()
{
    int sz,*ptr,key,i;
    printf("enter size of the array");
    scanf("%d",&sz);
    int arr[sz];
    printf("enter elements in the array");
    for(i=0;i<sz;i++)
    scanf("%d",&arr[i]);
    printf("\nyour entered elements...\n");
    for(i=0;i<sz;i++)
        printf("%d  ",arr[i]);
    printf("\nenter the search key element  ");
    scanf("%d",&key);
    ptr=&arr[0];
    lins(ptr,key,sz);
    getch();
    return 0;
}
void lins(int *ptr,int kie,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
      if(kie==*(ptr+i))
       {
        printf("element found...at index %d ",i+1);
        break;
       }
    }
    if(i==size)
      printf("\noppss...look like search element is not in array");

}
