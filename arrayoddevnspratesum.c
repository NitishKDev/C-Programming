//finding sum of odd & even number separately within array and finding largest among them
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int s;
     printf("enter size of the array\n");
     scanf("%d",&s);
     int arr[s],odd=0,even=0,i,j;
     printf("enter elements in array");
     for(i=0;i<s;i++)
     scanf("%d",&arr[i]);
     for(j=0;j<s;j++)
     {
         if(arr[j]%2==0)
            even=even+arr[j];
         else
            odd=odd+arr[j];
     }
     if(even>odd)
        printf("even is %d and it is greater than odd %d",even,odd);
    else
    printf("odd is %d and it is greater than even %d",odd,even);
     getch();
     return 0;
 }
