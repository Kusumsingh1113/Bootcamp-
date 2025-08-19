#include<stdio.h>
void main()
{
    int n,k;
    printf("Enter the no.: ");
    scanf("%d",&n);
    printf("Enter Kth: ");
    scanf("%d",&k);
    n=n>>k;
    
    if(n&1==1)
    {
        printf("bit is set");
    }
    else
    {
        printf("bit is not set");
    }
    
}