#include<stdio.h>
void main()
{
    int n=8,i,xor1=0,xor2=0,missing,a[100] = {1, 3, 4, 5, 6, 7, 8};
    
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
        xor1=xor1^a[i];
    }
    printf("\n");
    for(i=1;i<n+1;i++)
    {
        printf("%d ",i);
        xor2=xor2^i;
    }
    missing=xor1^xor2;
    printf("\nmissing no. is : %d",missing);
}