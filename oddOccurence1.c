#include<stdio.h>
void main()
{
    int n,count=0,a[1000],i,xor=0;
    
    printf("Enter the no.: ");
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
        xor=xor^a[i];
    }
    printf("\n%d",xor);


    // while(n>0)
    // {
    //     n=n>>1;
    //     if(n&1==1)
    //     {
    //         count=count+1;
    //     }
    // }
    // if(count%2!=0)
    // {
    //     printf("positive odd occurence");
    // }
    
    
    
}