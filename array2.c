/* To print the sum of all he elements present in the array */
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
                s+=arr[i];
        }
        printf("\nSum=%d",s);
}
