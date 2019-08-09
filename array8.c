void main()
{
        int arr[100];
        int n,n1;
        printf("Enter the number of terms");
        scanf("%d",&n);
        int s=0,c=0;
        for(int i=0;i<n;i++)
        {
            printf("Enter a Number");
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++)
        {
                n1=arr[j];
            while(n1>0)
            {
                    c++;
                    n1=n1/10;
            }
            if(c=3 && n1%2==0)
            {
                s=s+arr[j];
            }
            c=0;
        }
        printf("Sum of 3 digit odd numbers =%d",s);
        }

