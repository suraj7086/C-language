#include<stdio.h>
#include<conio.h>
int SquareRoot(int m);
void PerfectSquare(int q,int * s);
void main()
{
    int i,num;
    printf("Enter the number to find the square root of number\n");
    scanf("%d",&num);
    printf("Entered number is %d\n",num);
    SquareRoot(num);


}
int SquareRoot(int m)
{   int n=m;
    int divisor,Root;
    PerfectSquare(n,&divisor,&Root);
    float quotient,average;
    quotient=n/(float)divisor;
    if()
    average=(quotient+divisor)/2;
    printf("%f %d",average,Root);


}
void PerfectSquare(int m, int *square,int *root)
{    int n=m;
    for(int i=1;i<n/2;i++)
    {   int perfect=i*i;
        if(perfect==n)
        {
            *root=i;
            printf("%d",*root);
        }
        else if(perfect>n)
        {
            *square=i-1;
        }

    }
}
