#include<stdio.h>
int asc_sorting(int *,int,int);
int desc_sorting(int *,int,int);
void input(int *,int);
int main()
{
    int size,l,s,ksmall,klarge;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size];
    printf("\nNOTE:while entering kth value ,make sure that it must be <= size of array\n");
    printf("\nEnter kth smallest number you wanna know ");
    scanf("%d",&ksmall);
     printf("\nEnter kth largest number you wanna know ");
    scanf("%d",&klarge);
    input(a,size);
    printf("\n");
    s=asc_sorting(a,size,ksmall);
    printf("output : %d\n",s);
    l=desc_sorting(a,size,klarge);
    printf("output : %d",l);
    return 0;
}
void input(int *p,int sz)
{
    int i;
    printf("Enter elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",p+i);
    printf("original array elements are\n");
    for(i=0;i<sz;i++)
        printf("%d ",*(p+i));
}
int asc_sorting (int *ptr,int sz,int ks)
{
    int i,j,tmp;

  for(i=0;i<sz;i++)
  {
    for(j=0;j<sz-i-1;j++)
    {
        if(*(ptr+j)>*(ptr+j+1))
        {
          tmp=*(ptr+j);
          *(ptr+j)=*(ptr+j+1);
          *(ptr+j+1)=tmp;
        }
    }
  }
  return(*(ptr+ks-1));
}
int desc_sorting (int *ptr,int sz,int kl)
{
    int i,j,tmp;
  for(i=0;i<sz;i++)
  {
    for(j=0;j<sz-i-1;j++)
    {
        if(*(ptr+j)<*(ptr+j+1))
        {
          tmp=*(ptr+j);
          *(ptr+j)=*(ptr+j+1);
          *(ptr+j+1)=tmp;
        }
    }
  }
  return(*(ptr+kl-1));
}

