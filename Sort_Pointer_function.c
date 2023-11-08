#include<stdio.h>
void asc_sorting(int *,int);
void desc_sorting(int *,int);
void display(int *,int);
void input(int *,int);
int main()
{
    int size;
    printf("Enter array size\n");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("\n");
    printf("sorted in ascending order\n");
    asc_sorting(a,size);
    display(a,size);
    printf("\nsorted in descending order\n");
    desc_sorting(a,size);
    display(a,size);
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
void desc_sorting (int *ptr,int sz)
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
}
void display(int *py,int sz)
{
    int i;
   for(i=0;i<sz;i++)
   {
    printf("%d ",*(py+i));
   }
}
