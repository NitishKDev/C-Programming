#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col;
    printf("enter the number of row: \n");
    scanf("%d",&row);
    printf("enter the number of column: \n");
    scanf("%d",&col);
    int a[row][col],i,j;
    printf("enter elements for array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nelement in the matrix are :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
     printf("\n");
    }
    getch();
    return 0;
}
