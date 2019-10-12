#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{  /*Program to find the gcd*/
   int num1,num2;
   /* use printf function to print in c language*/
   printf("Enter the numbers to find the GCD\n");
   scanf("%d %d",&num1,&num2); /*Take input from user*/
   printf(" Entered numbers are %d & %d\n",num1,num2);
   int m,count=0;
   if(num1>num2)
   {
       printf("%d is greater than %d\n",num1,num2);
       int arr[num2];
       for(int i=0;i<num2,m!=0;i++)
       {   count=count+1;
           arr[i]=num1%num2;
           num1=num2;
           num2=arr[i];
           m=arr[i];
           printf("%d %d\n",arr[i],count);
       }
       printf("GCD is %d",arr[count-2]);

   }
   else
   {
     printf("%d is greater than %d\n",num2,num1);

   }
}
