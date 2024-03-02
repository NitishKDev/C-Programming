//Find First and Last Position of Element in Sorted Array.
#include<stdio.h>
#include<conio.h>
int* searchRange(int *,int,int,int*);
int main()
{
    int sz;
    printf("Enter array size\n");
    scanf("%d",&sz);
    int a[sz],t,i,b[2];
    printf("Enter array elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    printf("Enter target elements\n");
    scanf("%d",&t);
    int *s=searchRange(a,sz,t,b);
    printf("[%d,%d]",*s,*(s+1));
    getch();
    return 0;
}
int* searchRange(int *a,int sz,int t,int *b)
{
    int i,j=0;
  for(i=0;i<sz;i++)
    {
        if(*(a+i)==t)
        {
            *(b+j)=i;
            if(j==0)
                j++;
        }
    }
    if(j==0)
    {
       *b=-1;
       *(b+1)=-1;
       return b;
    }
    else
    {
        if(*(b+1)==0)
            *(b+1)=*b;
     return b;
    }
}
