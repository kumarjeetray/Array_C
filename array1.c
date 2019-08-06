/* To Print all the elements present in an array */
#include<stdio.h>
void main()
{
        int arr[100];
        int n;
        printf("Enter the number of terms");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                printf("\nEnter a number ");
                scanf("%d",&arr[i]);
		}
		for(int k=0;k<n;k++)
		{
			if(k<n-1)
			{
				printf("%d",arr[k]);
			}
			else
			{
				printf("%d",arr[k]);
			}
		}
}
