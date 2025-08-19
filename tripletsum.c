#include<stdio.h>

    void main()
    {
        int sum,n=10,i,j,k,gsum,a[100]={1,2,3,4,5,6,7,8,9};
        
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter the sum of pair to match :");
        scanf("%d",&gsum);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                for(k=j;k<n;k++)
                {
                    if(a[i]+a[j]+a[k]==gsum)
                    {
                        printf("%d+%d+%d =%d\n",a[i],a[j],a[k],gsum);
                    }
                }
                
            }
            
        }
    }