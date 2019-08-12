/* Counts the no of even and odd nos */
#include<stdio.h>
void main()
{
    int nume=0,numo=0;
    int n=1;
    while(n!=0)
    {
        printf("\nEnter a number");
        scanf("%d",&n);
        if(n%2==0)
        {
            nume++;
        }
        else if(n%2!=0)
        {
            numo++;
        }
    }
    printf("\nNo of Even Numbers=%d",nume);
    printf("\nNo of Odd Numbers=%d",numo);
}
