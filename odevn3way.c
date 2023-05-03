#include<stdio.h>
#include<conio.h>
void oddeven1(int);
void oddeven1(int);
void oddeven1(int);
int main()
{
    int chk;
    printf("enter umber for chekcing");
    scanf(" %d",&chk);
    oddeven1(chk);
    oddeven2(chk);
    oddeven3(chk);
    getch();
    return 0;
}
void oddeven1(int x)
{
    if(x%2)
        printf("\nodd");
    else
        printf("\neven");

}
void oddeven2(int x)
{
    if(x/2*2==x)
        printf("\neven");
    else
        printf("\nodd");


}
void oddeven3(int x)
{
    if(x&1)
        printf("\nodd");
    else
        printf("\neven");


}
