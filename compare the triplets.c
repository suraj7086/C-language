#include<stdio.h>
/*first edit*/
int main()
{
 int count_a,count_b;
 int local=0;
 int a[2],b[2];
 for(int i=0;i<3;i++)
 {
  scanf("%d",&a[i] );
 }
 for(int i=0;i<3;i++)
 {
  scanf("%d",&b[i] );
 }
 printf("%d",local);
 for(int i=0;i<3;i++)
 {
   if(a[i]>b[i])
   {
       count_a=local+1;
       printf("%d\n",count_a);
   }
   else if (b[i]>a[i])
   { count_b=local+1;
   printf("%d\n",count_b);
   }
   else
    printf("chutiya\n");

 }
 printf("%d %d",count_a,count_b);
 return 0;

}
