//C program to input and print text using Dynamic Memory Allocation.
#include<stdio.h>
int main()
{
    char *ptr;
    int s;
    printf("Enter text size\n");
    scanf("%d",&s);
    ptr=(char*)malloc(s*sizeof(char));
   // fflush(stdin);
    printf("Enter text\n");
    scanf(" ");//clear input buffer
    gets(ptr);
    printf("Input text is : %s",ptr); //puts(ptr);
    free(ptr);
    return 0;
}
