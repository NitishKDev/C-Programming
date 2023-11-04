#include <stdio.h>
int main()
{
    int T,X,Y,i;
    printf("Welcome to candy store\n");
    printf("less than or equal to target u get 1$ ..for greater than target u get 2$ per\n");
    printf("Enter number of test cases\n");
    scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    printf("Enter target goal and number of candy you sold\n");
	    scanf("%d%d",&X,&Y);
	    if(X>=Y)
	    printf("%d\n",Y);
	    else
	    printf("%d\n",2*(Y-X)+X);
	}
	return 0;
}

