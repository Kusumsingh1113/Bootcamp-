#include<stdio.h>

    void main()
    {
        int sum,n=6,i,j,gsum,a[100]={4,9,6,3,2,1};
        
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
                if((a[i]+a[j])%gsum==0)
                {
                    printf("%d %d\n",a[i],a[j]);
                    
                }
            }
            
        }
    }
