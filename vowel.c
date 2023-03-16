//print no vowel in given string
#include<stdio.h>
#include<conio.h>
int main()
{
    char aa[10];
    int i;
    printf("enter your strig\n");
   scanf("%s",&aa[0]);
   for(i=0;aa[i]!='\0';i++)
   {
    if(aa[i]!='a'&&aa[i]!='e'&&aa[i]!='i'&&aa[i]!='o'&&aa[i]!='u'&&aa[i]!='A'&&aa[i]!='E'&&aa[i]!='I'&&aa[i]!='O'&&aa[i]!='U')
    printf("%c",aa[i]);
   }
   printf("\n");
   printf(aa);
    getch();
    return(0);
}
