/*#include<stdio.h>
void main()
{
    int n,sum=0,r,i;
    printf("enter n: ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
       
    }
    printf("%d",sum);
}*/

#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    printf("sum= %d",sum(n));
}
int sum(int n)
{
    if(n==1)
    {
        return(1);
    }
    else if (n==0)
    {
        return(0);
    }
    
    else
    {
        return(n+sum(n-1));
    }
}
