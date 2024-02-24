//program to find word or sentence frequency in notebook.
#include<stdio.h>
#include<conio.h>
int main()
{
    int nmb,i,cnt=0,klen,j;
    printf("Enter the number of words or sentence you want to write in notebook\n");
    scanf("%d",&nmb);
    char str[nmb][20],ke[20];
    printf("Add %d words or sentence to notebook\n  Note(press enter after one complete word or sentence)\n",nmb);
    fflush(stdin);
    for(i=0;i<nmb;i++)
       gets(str[i]);
    printf("\nEnter the search keyword\n");
         gets(ke);
    for(i=0;ke[i]!='\0';i++);
    klen=i;
    for(i=0;i<nmb;i++)
    {
        for(j=0;ke[j]!='\0';j++)
        {
            if(str[i][j]!=ke[j])
                break;
        }
        if(j==klen&&str[i][j]=='\0')
            cnt++;
    }
    printf("\n%s appears %d times in notebook",ke,cnt);
    getch();
    return 0;
}
