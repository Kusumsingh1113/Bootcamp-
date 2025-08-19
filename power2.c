#include<stdio.h>
void main()
{
    int n,k,count=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    while(n>0)
    {
        
        if(n&1==1)
        {
            count=count+1;
        }
        n=n>>1;
    }
    if(count==1)
    {
        printf("power of 2");
    }
    else
    {
        printf("not the power of 2");    
    }
    // while(n>0)
    // {
    //     if(n&(n-1))
    //     {
    //         printf("not Power of 2");
    //         break;
    //     }
    //     else
    //     {
    //         printf("power of 2");
    //         break;
    //     }
    // }
}