#include<stdio.h>
void main()
{
    int a[100],i,n,tl,cl;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the array :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    tl=1;
    cl=1;
    for(i=0;i<n;i++)
    {
        if((a[i-1]%2-a[i]%2)!=0)
        {
            cl++;
        }
        else
        {
            cl=1;
        }
        if(cl>tl)
        {
            tl=cl;
        }
    }
    
    printf("\nthe max length : %d",tl);
}