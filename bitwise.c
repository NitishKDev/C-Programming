#include<stdio.h>
int main()
{
    int v=4,a=4,b=3;
    printf("%d\n",v<<2); // 4*2^2 = 16
    printf("%d\n",v>>2); // 4/2^2 = 1
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a= %d and b = %d",a,b); //swap
    return 0;
}

