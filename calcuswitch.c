#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    float d,f,g;
    char c;
    printf("+ for addition\n - for subtraction\n * for multiplication\n / for division\nenter any character from the set");
    scanf("%c",&c);
    switch(c)
    {
        case '+' :
            printf("enter two number for addition");
            scanf("%d%d",&a,&b);
            printf("result=%d",a+b);
            break;
        case '-' :
            printf("enter two number for subtraction");
            scanf("%d%d",&a,&b);
            printf("result=%d",a-b);
            break;
        case '*' :
            printf("enter two number for multiplication");
            scanf("%d%d",&a,&b);
            printf("result=%d",a*b);
            break;
        case '/' :
            printf("enter two number for division");
            scanf("%f%f",&d,&f);
            g=d/f;
            printf("result =%f",g);
            break;
        default : printf("enter valid chaarcter");

    }
    getch();
    return 0;
}
