#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number of terms to add");
    printf("\n");
    scanf("%d",&num);
    float sum;
    sum=1;
    for(int i=1;i<num;i++)
    {
        sum=sum+1/(float) i;
    }
    printf("sum of %d terms is %f",num,sum);
    getch();
}
