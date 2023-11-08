#include<stdio.h>
int minm(int *,int);
int maxm(int *,int);
int main()
{
    int size,max,min,s,g;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size],i;
    printf("Enter elements\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    s=minm(a,size);
    g=maxm(a,size);
    printf("smallest element is %d\n",s);
    printf("greatest element is %d\n",g);
    return 0;
}
int minm(int *ptr,int sz)
{
    int mn,i;
    mn=*ptr;
 for(i=1;i<sz;i++)
    {
       if(mn>*(ptr+i))
       {
           mn=*(ptr+i);
       }
    }
    return(mn);
}
int maxm(int *qtr,int sz)
{
 int mx,i;
    mx=*qtr;
 for(i=1;i<sz;i++)
    {
       if(mx<*(qtr+i))
       {
           mx=*(qtr+i);
       }
    }
    return(mx);
}
