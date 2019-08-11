/* To check whether an element is present in the array */
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
        int s,c=0;
        printf("\nEnter the number you want to search in the array");
        scanf("%d",&s);
        for(int j=0;j<n;j++)
        {
            if(arr[j]==s)
            {
                    printf("\nThe number has been found in the array");
                    c=1;
            }
        }
        if(c==0)
        {
                printf("\nThe number cant be found in the array");
        }
}
