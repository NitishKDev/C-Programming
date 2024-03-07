//Rotate a matrix by 90 degree in clockwise direction.
#include<stdio.h>
#include<conio.h>
int equilibrium(int[], int);
int main()
{
    int row,col,i,j;
    printf("Enter row size and column size\n");
    scanf("%d%d",&row,&col);
    int a[row][col];
    printf("Enter elements in %d*%d matrix\n",row,col);
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    printf("Original matrix \n");
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
         {
             printf("%d ",a[i][j]);
        }
      printf("\n");
    }
   printf("Rotate matrix by 90 degree\n");
   for(i=0;i<col;i++)
    {
     for(j=row-1;j>=0;j--)
         {
             printf("%d ",a[j][i]);
        }
      printf("\n");
    }
  getch();
  return 0;
}
