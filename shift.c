#include<stdio.h>
void main()
{
    int n,a[100],j,i,result;
    printf("Enter the no.: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        a[j]=n%2;
        n=n/2;
    }
    printf("%d",n);
    for(i=j-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    for(i=j-1;i>=0;i--)
    {
        result=a[i]<<2;
        printf("\n");
        printf("%d",result);
    }
}