//program to find second largest number from array.
#include<conio.h>
#include<stdio.h>
void sec_lar(int [],int);
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
    sec_lar(a,len);
    getch();
    return 0;
}
void sec_lar(int *ptr,int len)
{
    int i,j,t;
    int *pt=ptr;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(*(ptr+j)< *(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        if(*(pt+i)>*(pt+i+1))
        {
            printf("Second largest number is %d",*(ptr+i+1));
            break;
        }
    }

}
