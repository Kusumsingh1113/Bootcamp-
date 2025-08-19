#include<stdio.h>
void main()
{
    int a[100],i,n,m,f=0;
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
    printf("\n enter the no. to search: ");
    scanf("%d",&m);
    for(i=0;i<=n;i++)
    {
        if(a[i]==m)
        {
            f=1;
        }
        
    }
    if(f==1)
    {
        printf("no. found");
    }
    else
    {
        printf("no. not found");
    }
}