//leaders in an array
#include<stdio.h>
#include<conio.h>
void leader(int *,int);
int main()
{
    int sz,i;
    printf("Enter array size\n");
    scanf("%d",&sz);
    int a[sz];
    printf("Enter array elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    leader(a,sz);
    getch();
    return 0;
}
void leader(int *p,int s)
{
    int i,j,max;
    printf("Leaders are: ");
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(*(p+i)>=*(p+j))
            {
                max=*(p+i);
            }
            else
                break;
        }
        if(j==s)
            printf("%d ",*(p+i));
    }
}
