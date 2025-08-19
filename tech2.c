#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("enter rows : ");
    scanf("%d",&n);
    printf("enter columns : ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
        
}