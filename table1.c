#include<stdio.h>
void main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("\nTable of the %d is",n);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d * %d is %d",n,i,n*i);
    }

}