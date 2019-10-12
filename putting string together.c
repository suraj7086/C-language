#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    char first_name[10]="SURAJ";
    char second_name[10]="SINGH";
    char last_name[10]="NISHAD";
    char name[35];
    for(i=0;first_name[i]!='\0';i++)
    {
        name[i]=first_name[i];
        name[i+1]=' ';
    }

    printf("%s\n",name);
    for(j=0;second_name[j]!='\0';j++)
    {
        name[i+j+1]=second_name[j];
        name[i+j+2]=' ';
    }
    printf("%s\n",name);
    for(k=0;last_name[k]!='\0';k++)
    {
        name[i+j+2+k]=last_name[k];
        name[i+j+k+3]=' ';
    }
    printf("%s",name);
}
