//define constant using macro and const keyword
#include<stdio.h>
#define PI 3.14159  //macro as value
#define add(x,y) x+y  //macro as function

//multiple line using '\'
#define greater(a,b) if(a>b)\
                        printf("%d is greater",a);\
                        else\
                            printf("%d is greater",b);

//predefined macro __DATE__ , __TIME__

int main()
{
    printf("%.2f\n",PI);
    printf("sum is %d\n",add(25,8));
     printf("Result is %d\n",4*add(5,8));
    greater(34,6);
    printf("\nDate is %s",__DATE__);
     printf("\nTime is %s",__TIME__);
     const int aa = 8;
     //aa=9; error
     printf("\nconstant is %d",aa);
    return 0;
}
