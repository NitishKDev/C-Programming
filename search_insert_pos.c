//Search Insert Position
#include<stdio.h>
#include<conio.h>
int searchInsert(int*,int,int);
int main()
{
    int sz;
    printf("Enter array size\n");
    scanf("%d",&sz);
    int a[sz],t,i,j;
    printf("Enter array elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    printf("Enter target elements\n");
    scanf("%d",&t);
    printf("index %d",searchInsert(a,sz,t));
    return 0;
    getch();
}
int searchInsert(int* ptr, int sz, int t)
{
    int i,j;
    for(i=0;i<sz;i++)
    {
      if(*(ptr+i)==t)
        return i;
    }
    if(i==sz)
      {
         for(j=0;j<sz;j++)
             if(t<*(ptr+j))
                return j;
      }
return j;
}

