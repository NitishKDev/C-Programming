#include<stdio.h>
#include<conio.h>
void bbls(int *,int);
void dis(int *,int);
int main()
{
    int sz,*ptr,i;
    printf("enter size of the array");
    scanf("%d",&sz);
    int arr[sz];
    printf("enter elements in the array");
    for(i=0;i<sz;i++)
    scanf("%d",&arr[i]);
    ptr=&arr[0];
    printf("\nyour entered elements...\n");
    for(i=0;i<sz;i++)
        printf("%d  ",arr[i]);
    bbls(ptr,sz);
    dis(ptr,sz);
    getch();
    return 0;
}
void bbls(int *ptrr,int size)
{
int i,j,tmp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(*(ptrr+j)>*(ptrr+j+1))
            {
                tmp=*(ptrr+j);
                *(ptrr+j)=*(ptrr+j+1);
                *(ptrr+j+1)=tmp;
            }
        }
    }
}
void dis(int *pt,int s)
{
    int ii;
    printf("\nsorted elements are: ");
    for(ii=0;ii<s;ii++)
        printf("%d  ",*(pt+ii));
}
