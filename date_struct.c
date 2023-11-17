#include<stdio.h>
struct date{
int a,b,c
};
struct date input(void);
void output(struct date);
int main()
{
    struct date d1;
    d1=input();
    output(d1);
    return 0;
}
struct date input()
{
    struct date d2;
    printf("enter today's date in DD/MM/YYYY\n");
    scanf("%d/%d/%d",&d2.a,&d2.b,&d2.c);
    return(d2);
}
output(struct date d3)
{
   printf("Today's date is\n%d/%d/%d",d3.a,d3.b,d3.c);
}


