#include<stdio.h>
void main()
{
    int a[100],i,n,j=0,count=0,sum=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    while(n>0)
    {
        a[j]=n%2;
        n=n/2;
        j++;
    }
    printf("%d",n);
    for(i=j-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    for(i=j-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            count=count+1;
        }
        else if(a[i]==0)
        {
            sum=sum+1;
        }
    }
    printf("\n");
    printf("1 : %d\n",count);
    printf("0 : %d",sum);
    
}