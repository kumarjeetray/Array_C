/* Sum of the series x1^2,x2^2,x3^2.........x10^2  */

#include<stdio.h>
#include<math.h>
void main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter a Number");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<10;j++)
    {
        sum+=pow(arr[j],2);
    }
    printf("\nSum=%d",sum);
}
