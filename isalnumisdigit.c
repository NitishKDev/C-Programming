//function which checks whether input character is digit or alphabet,or alphanumeric,lower,upper,to lower, to upper
#include<stdio.h>
#include<conio.h>
void izdigit(char);
void izalpha(char);
void izalnum(char);
void izlower(char);
void izupper(char);
void toolower(char);
void tooupper(char);
int main()
{
    char chr;
    int cho;
  while(1)
  {
    system("cls");
    printf("hit 1 for checking whether it is digit or not\nhit 2 for checking whether it is alphabet or not\nhit 3 for checking whether it is alphanumeric or not\nhit 4 for checking whether it is in lowercase or not\nhit 5 for checking whether it is in uppercase or not\nhit 6 for converting it into lowercase\nhit 7 for converting it into uppercase\nhit 8 for exit\n");
    printf("\n now enter your choice");
    scanf("%d",&cho);
    printf("\nenter any character  ");
    chr=getch();
    switch(cho)
    {
    case 1:izdigit(chr);break;
    case 2:izalpha(chr);break;
    case 3:izalnum(chr);break;
    case 4:izlower(chr);break;
    case 5:izupper(chr);break;
    case 6:toolower(chr);break;
    case 7:tooupper(chr);break;
    case 8:exit(0);
    default: printf("\nenter valid options");
    }
  }
    getch();
    return 0;
}
void izdigit(char c)
{
    if(isdigit(c)!=0)
        printf("\ncharacter is digit");
    else
    printf("\ncharacter is not digit");
    getch();
}
void izalpha(char c)
{
    if(isalpha(c)!=0)
        printf("\ncharacter is alphabet");
    else
    printf("\ncharacter is not alphabet");
    getch();
}
void izalnum(char c)
{
    if(isalnum(c)!=0)
        printf("\ncharacter is alphanumeric");
    else
    printf("\ncharacter is not alphanumeric");
    getch();
}
void izlower(char c)
{
    if(isalpha(c))
    {
        if(islower(c))
           printf("\ncharacter is in lowerrcase");
       else
          printf("\ncharacter is not in lowercase");
    }
    else
        printf("\nnot alphabet");
    getch();
}
void izupper(char c)
{
    if(isalpha(c))
    {
        if(isupper(c))
           printf("\ncharacter is in uppercase");
       else
          printf("\ncharacter is not in uppercase");
    }
    else
        printf("\nnot alphabet");
    getch();
}
void toolower(char c)
{
    if(isalpha(c))
        printf("\nlowercase : %c",tolower(c));
    else
    printf("\nnot alphabet");
    getch();
}
void tooupper(char c)
{
    if(isalpha(c))
        printf("\nuppercase : %c",toupper(c));
    else
    printf("\nnot alphabet");
    getch();
}
