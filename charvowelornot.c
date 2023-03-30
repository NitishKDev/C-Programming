#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("enter any character");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        printf("entered character is vowel");
    else
        printf("enetred character is not vowel");
    getch();
    return 0;
}
