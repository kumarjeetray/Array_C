/* It accept an array and calculates the sum of odd numbers */
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
                if(arr[i]%2!=0)
                {
                    s+=arr[i];
                }
        }
        printf("\nSum=%d",s);
}
