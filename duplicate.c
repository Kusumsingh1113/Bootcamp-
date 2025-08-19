#include<stdio.h>
void main()
{
    int a[100],i,n,temp,j,f=0,k;
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
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }

        }
    }
    if(f==0)
    {
        printf("no duplicate element");
    }
    else if(f==1)
    {
        printf("\nduplicate element present\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}



