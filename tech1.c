#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter rows : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=2;j<=i;j++)
        {
            if(j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(i=1;i<=n+1;i++)
    {
        printf("* ");
    }
}

