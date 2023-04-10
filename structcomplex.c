#include<stdio.h>
#include<conio.h>
struct complex
{
    int reall;
    int img;
};
struct complex input(void);
struct complex add(struct complex,struct complex);
void display(struct complex);
int main()
{
    struct complex c;
    c=input();
    display(c);
    getch();
    return 0;
}
struct complex input()
{
    struct complex c1,c2,c6;
    printf("enter real part for first complex number\n");
    scanf("%d",&c1.reall);
    printf("enter imaginary part for first complex number\n");
    scanf("%d",&c1.img);
    printf("enter real part for second complex number\n");
    scanf("%d",&c2.reall);
    printf("enter imaginary part for second complex number\n");
    scanf("%d",&c2.img);
    c6=add(c1,c2);
    return(c6);
};
struct complex  add(struct complex c3,struct complex c4)
{
    struct complex c5;
    c5.reall=c3.reall+c4.reall;
    c5.img=c3.img+c4.img;
    return c5;
}
void display(struct complex cd)
{
    printf("sum of two complex number are:\nreal part=%d\nimginary part=%d",cd.reall,cd.img);
}
