/* It finds the second largest and the second smallest number in the array */
#include<stdio.h>
void main()
{
        int arr[100];
        int n;
        printf("Enter the No of terms:");
        scanf("%d",n);
        for(int i=0;i<n;i++)
        {
                printf("\nEnter a Number:");
                scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++)
        {
                for(int k=j+1;k<n;k++)
                {
                        if(arr[k]<arr[j])
                        {
                            int temp=arr[j];
                            arr[j]=arr[k];
                            arr[k]=temp;
                        }
                }
        }
        printf("\nThe second largest number in the array is %d",arr[n-2]);
        printf("\nThe second smallest number in the array is %d",arr[1]);
}
