/* It calculates the sum of all the numbers present in the even indexes of the array */
#include<stdio.h>
void main()
{
        int arr[100];
        int n;
        printf("Enter the number of terms");
        scanf("%d",&n);
        int s=0;
        for(int i=0;i<n;i++)
        {
                printf("\nEnter a number ");
                scanf("%d",&arr[i]);
                if(i%2==0)
                {
                    s+=arr[i];
                }
        }
        printf("\nSum=%d",s);
}
