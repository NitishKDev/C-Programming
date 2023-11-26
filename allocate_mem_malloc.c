 /*C program to create memory for int, char and float variable at run time.
In this program we will create memory for int, char and float variables at run time using malloc() function
and before exiting the program we will release the memory allocated at run time by using free() function.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int *ptr1;
    char *ptr2;
    float *ptr3;
    ptr1=(int*)malloc(sizeof(int));
    printf("enter integer\n");
    scanf("%d",ptr1);
    fflush(stdin);
    ptr2=(char*)malloc(sizeof(char));
    printf("enter character\n");
    scanf("%c",ptr2);
    ptr3=(float*)malloc(sizeof(float));
    printf("enter float\n");
    scanf("%f",ptr3);
    printf("\ninput value is\n");
    printf("%d  %c  %f",*ptr1,*ptr2,*ptr3);
    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
