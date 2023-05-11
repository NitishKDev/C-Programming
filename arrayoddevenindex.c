#include<stdio.h>
#include<conio.h>
int main()
{
    int sz,i,oddi=0,eveni=0;
    float avg;
    printf("enter size of array ");
    scanf("%d",&sz);
    int arr[sz];
    printf("enter your elements...\n");
    for(i=1;i<=sz;i++)
        scanf("%d",&arr[i]);
    printf("\nyour entered elements...\n");
    for(i=1;i<=sz;i++)
        printf("%d  ",arr[i]);
    printf("\nsum of element at odd index is: ");
    for(i=1;i<=sz;i=i+2)
        oddi=oddi+arr[i];
    printf("%d  ",oddi);
    printf("\nsum of element at even index is: ");
    for(i=2;i<=sz;i=i+2)
        eveni=eveni+arr[i];
    printf("%d  ",eveni);
    avg=(oddi+eveni)/2.0;
    printf("\n average of %d and %d is: %f ",oddi,eveni,avg);
    getch();
    return(0);
}
