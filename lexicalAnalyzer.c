//lexical analyzer
#include<stdio.h>
int main()
{
    int a=4,b=3;
    printf("%d",a+++b); //a ++ + b = 7
    //printf("%d\n",a++ + b); //= 7  spacing matters
    //printf("%d",a + ++b); //= 8
    //printf("%d",a+++++b); //a ++ ++ + b = error
    return 0;
}

