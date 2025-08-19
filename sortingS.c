#include<stdio.h>
void main() 
{
    int a[100],i,n,m,temp,j;
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
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted array\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }

}