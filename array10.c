/* Program to revere the contents of an array in the same array */
void main()
{
        int arr[100];
        int n,n1;
        printf("Enter the number of terms");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("Enter a Number");
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++)
        {
                int swap=arr[j];
                arr[j]=arr[n-j-1];
                arr[n-j-1]=swap;
        }
        printf("Array After Reversal");
        for(int k=0;k<n;k++)
        {
                printf("%d ,",arr[k]);
        }
}
