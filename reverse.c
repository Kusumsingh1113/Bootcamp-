#include<stdio.h>
void main()
{
    int a[100],i,j,n,temp;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter the array :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    
    for(i=n;i>=0;i--)
    {
        printf(" \n%d",a[i]);
    }
}