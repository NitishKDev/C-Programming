#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void login(void);
int main()
{
    login();
    getch();
    return 0;
}
void login(void)
{
    int l1,l2,a2,a1,i,ii;
    char name[20],name1[20]="nitish kumar";
    char auid[20],auid1[20]="ait22mcav057";
    l1:printf("\nenter your name  ");
    gets(name);
    l2=strlen(name1);
    l1=strlen(name);
    if(l1==l2)
    {
        for(i=0;i<l2;i++)
        {
            if(name[i]!=name1[i])
            break;
        }
        if(i==12)
            printf("login successful");
        else
            {
            printf("invalid name ...enter again");
            getch();
            system("cls");
             goto l1;
            }
    }
    else
        {
        printf("enetr valid name...");
        getch();
        system("cls");
        goto l1;
        }



         l2:printf("\nenter your auid  ");
    gets(auid);
    a2=strlen(auid1);
    a1=strlen(auid);
    if(a1==a2)
    {
        for(ii=0;ii<a2;ii++)
        {
            if(auid[ii]!=auid1[ii])
            break;
        }
        if(ii==a2)
            printf("login successful");
        else
            {
            printf("invalid auid ...enter again");
            getch();
            system("cls");
             goto l2;
            }
    }
    else
        {
        printf("enetr valid auid...");
        getch();
        system("cls");
        goto l2;
        }

}


