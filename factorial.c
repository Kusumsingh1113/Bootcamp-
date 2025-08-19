#include<stdio.h>
unsigned long long fact(int);
void main()
{
    int n,f;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    f=fact(n);
    printf(" factorial if %d is %llu",n,f);
}
unsigned long long fact(int n)
{
    if(n==0 || n==1)
    {
        return(1);
    }
    else
    {
        return(n*fact(n-1));
    }
}