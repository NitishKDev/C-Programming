#include <stdio.h>
int main()
{
    int T,number,i;
    printf("Instructions:\n");
    printf("Alice likes numbers which are even, and are a multiple of 7\n");
    printf("Bob likes numbers which are odd, and are a multiple of 9\n");
    printf("If both Alice and Bob don't like the number, Charlie likes it\n\n");
    printf("Enter number of round you wanna play\n");
    scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    printf("\nEnter number for %d round",i);
	    scanf("%d",&number);
	    if((number%2==0)&&(number%7==0))
	    printf("Alice\n");
	    else if((number%2!=0)&&(number%9==0))
	    printf("Bob\n");
	    else
	    printf("Charlie\n");
	}
	return 0;
}


