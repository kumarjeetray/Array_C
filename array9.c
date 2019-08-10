/* To reverse the elements of one array and storing it into another array */

void main()
{
        int arr[100];
        int n,n1;
        printf("Enter the number of terms");
        scanf("%d",&n);
        int arr2[100];
        for(int i=0;i<n;i++)
        {
            printf("Enter a Number");
            scanf("%d",&arr[i]);
        }
        for(int j=0,k=n-1;j<n;j++,k--)
        {
            arr[j]=arr2[k];
        }
        printf("Elements in Reverse Order:\n");
        for(int l=0;l<n;l++)
        {
                printf("%d",arr2[l]);
        }
}
