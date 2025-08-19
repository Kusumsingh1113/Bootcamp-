#include<stdio.h>
void main()
{
    int a[100],i,n,j,size,sum,wsum;
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
        for(j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                printf("%d",a[k]);
                
            }
            printf("\n");
        }
    }
}