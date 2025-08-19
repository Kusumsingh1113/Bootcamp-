#include<stdio.h>
void main()
{
    int n = 8,i,xor=0,rsb,num1=0,num2=0;
    int a[] = {2, 1, 2, 3, 4, 5, 1, 3};
    for(i=0;i<n;i++)  
    {
        xor=xor^a[i];
    }
    rsb=xor&((~xor)+1);
    for(i=0;i<n;i++)  
    {
        if((a[i]&rsb)==0)
        {
            num1=num1^a[i];
        }
        else
        {
            num2=num2^a[i];
        }
        
    }
    printf("%d ",num1);
    printf("%d",num2);
    

    // int size1=0,size2=0,temp[100];
    // for(i=1;i<n;i++)  
    // {
    //     if((a[i]&rsb)==0)
    //     {
    //         temp[size1++]=a[i];
    //     }
    //     else
    //     {
    //         temp[size2++]=a[i];
    //     }
    //     printf("%d",temp[size1]);
    //     printf("%d",temp[size2]);
    // }

}
