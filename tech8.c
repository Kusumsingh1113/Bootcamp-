#include<stdio.h>
void main()
{
    int i,j,n,k,m;
    printf("enter rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        m= 2*i-1;
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        m= 2*i-1;
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}