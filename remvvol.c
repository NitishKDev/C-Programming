//remove vowel from given string n shiftig array
#include<stdio.h>
#include<conio.h>
int main()
{
    char aa[20];
    int i,j;
    printf("enter your strig\n");
   scanf("%s",&aa[0]);
   for(i=0;aa[i]!='\0';i++)
   {
       if(aa[i]=='a'||aa[i]=='e'||aa[i]=='i'||aa[i]=='o'||aa[i]=='u'||aa[i]=='A'||aa[i]=='E'||aa[i]=='I'||aa[i]=='O'||aa[i]=='U')
        {
            for(j=i;aa[j]!='\0';j++)
            {
                aa[j]=aa[j+1];
                //if(aa[j]=='\0')
                   // break;
            }
        }

   }
    printf(aa);
    getch();
    return(0);
}

