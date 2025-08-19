#include<stdio.h>
void main()
{
    int a[100],i,n,d,j,f;
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
        f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("\nleader= %d",a[i]);
        }
    }   

}