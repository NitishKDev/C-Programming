 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 #include<stdlib.h>
 void sumfirstnevnnatno(void);
 void sumfirstnoddnatno(void);
 void sumoffstnnatno(void);
 void prdtofnnatuno(void);
 void greatrbwtwo(void);
 void grtrbwthree(void);
 int main()
 {
    int choice;
    setbuf(stdout,NULL);
    while(1)
    {

    	printf("\n1:Quit\n2:sum of first n even natural number\n3:sum of first n odd natural number\n4:sum of first n natural number\n5:product of first n natural number\n6:greater between two number\n7:greater between three number\n8:check which year is leap year\n9:find roots of quadratic equation\n10:find factorial of a natural number\n");
    	printf(".................................................................\nenter your choice");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    	case 1:exit(0);
    	case 2: sumfirstnevnnatno(); break;
    	case 3: sumfirstnoddnatno(); break;
    	case 4: sumoffstnnatno(); break;
    	case 5: prdtofnnatuno(); break;
    	case 6: greatrbwtwo(); break;
    	case 7: grtrbwthree(); break;
    	case 8: leapyr(); break;
    	case 9: rootquadratic(); break;
    	case 10: factorial(); break;
    	default: printf("please enter valid choice");
    	}
    }
    return(0);
 }
       void sumfirstnevnnatno()
       {
        int n,s=0,i=1;
        printf("enter n nmber");
		scanf("%d",&n);
		while(i<=n)
		 {
		   s=s+(i*2);
		   i++;
	     }
	printf("%d",s);
       }

     void sumfirstnoddnatno()
     {
     	 int n,s=0,i=1;
     	 printf("enter n nmber");
		 scanf("%d",&n);
     	 while(i<=n)
		{
			s=s+((i*2)-1);
			i++;
		}
	  printf("%d",s);
     }
     void sumoffstnnatno()
     {
     	 int i=1,n,s=0;
     	 printf("enter n nmber");
		 scanf("%d",&n);
     	 while(i<=n)
			{
			s=s+i;
			i++;
			}
		printf("%d",s);
     }
     void prdtofnnatuno()
     {
     	 int i=1,s=1,n;
     	 printf("enter n nmber");
		 scanf("%d",&n);
			while(i<=n)
			{
				s=s*i;
				i++;
			}
		printf("%d",s);
     }
     void greatrbwtwo()
     {
    	 int a,b;
    	 printf("\nenter two number\n");
    	 scanf("%d%d",&a,&b);
        printf("%d is greater",a>b?a:b);
     }
     void grtrbwthree()
     {
    	 int a,b,c;
    	 printf("\nentetr three number\n");
    	 scanf("%d%d%d",&a,&b,&c);
    	 if(a>b)
    	 {
    		 if(a>c)
    			 printf("a is greater");
    		 else
    			 printf("c is greater");
    	 }
    	 else
    	 {
    		 if(b>c)
    			 printf("b is greater");
    		 else
    			 printf("c is greater");
    	 }
     }


