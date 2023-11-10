#include<stdio.h>
void asc_sorting(int *,int);
int counting(int *,int,int);
void input(int *,int);
int main()
{
    int size,c,target,ch;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("\n");
    asc_sorting(a,size);
    labb:printf("\nEnter number whose occurance you wanna find\n");
    scanf("%d",&target);
    c=counting(a,size,target);
    printf("Total count is %d\n",c);
    printf("Wanna find occurance again?Hit 1 for Yes ,0 for No.\n");
    scanf("%d",&ch);
    if(ch==1)
        goto labb;
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
void asc_sorting (int *ptr,int sz)
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
}
int counting(int *ptr,int sz,int t)
{
    int i,count=0;
    for(i=0;i<sz;i++)
    {
        if(*(ptr+i)==t)
        {
          count++;
        }
    }
    return(count);
}























