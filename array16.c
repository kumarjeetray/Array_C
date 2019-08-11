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
        int c=0;
        printf("The non-prime numbers in the entered array are: \n")
        for(int j=0;j<n;j++)
        {
                for(int k=1;k<=arr[j];k++)
                {
                        if(arr[j]%k==0)
                        {
                                c++;
                        }
                }
                if(c>2)
                {
                        printf("%d ,",ar[j]);
                }
                c=0;
        }
}