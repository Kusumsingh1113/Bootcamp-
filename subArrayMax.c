#include<stdio.h>
void main()
{
    int a[100],i,n,j,maxsum=0,sum;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the array :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }

    }
    printf("\nmaximum sum = %d",maxsum);

}