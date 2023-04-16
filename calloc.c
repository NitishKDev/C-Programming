#include<stdio.h>
#include<conio.h>
void callloc(void);
void reallloc(void);
int *ptr,*ptr1;
int main()
{
    callloc();
    reallloc();
    free(ptr);
    free(ptr1);
    return 0;
}
void callloc()
{
    int i,size;
    printf("enter size of array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf("\nenter elements ");
    for(i=0;i<size;i++)
    scanf("  %d",ptr+i);
    for(i=0;i<size;i++)
    printf("%d\n",*(ptr+i));
}
void reallloc()
{
     int ii,size1;
    printf("want to change size?");
    scanf("%d",&size1);
    ptr1=(int*)realloc(ptr,size1);
     printf("\nenter elements ");
    for(ii=0;ii<size1;ii++)
    scanf("  %d",ptr1+ii);
    for(ii=0;ii<size1;ii++)
    printf("%d\n",*(ptr1+ii));
}
