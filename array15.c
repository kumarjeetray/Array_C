#include<stdio.h>
void main()
{
        int arr[100];
        int n;
        printf("Enter the No of terms:");
        scanf("%d",n);
        for(int i=0;i<n;i++)
        {
                printf("\nEnter a Number less tahm 150:");
                scanf("%d",&arr[i]);
		}
		int ch[]={0,1,2,3,5,8,13,21,34,55,89,144};
		printf("The Fibonacci no present in the array are:\n")
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<12;j++)
				{
						if(arr[i]==ch[j])
						{
								printf("%d,",&arr[i]);
						}
				}
		}
}
