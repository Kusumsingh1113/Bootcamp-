#include<stdio.h>
void main()
{
    int a[100],i,n,d,j=0;
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
    printf("\nselect no. of rotations => d : ");
    scanf("%d",&d);
    int temp[d];
    for(i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(i=0;i<n-d;i++)
    {
        a[i]=a[i+d];
    }
    
    while(i<n)
    {
        a[i]=temp[j];
        i++;
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }







    /*for(i=0;i<d-1;i++)
    {
        printf("%d",a[i]);
    }
    for(i=d;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=d-1;i>=0;i--)
    {
        printf("%d",a[i]);
        
    }
    for(i=n-1;i>=d;i--)
    {
        printf("%d",a[i]);
        
    }
    printf("\n");*/
    
    
}
