#include<stdio.h>
void main()
{
    int a[100],i,n,count=0,maxcount=0;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the binary no. in 0 and 1 :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    
        
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {   
            count=count+1;
            
            if(maxcount<count)
            {
                maxcount=count;
            }  
        } 
        else
        {
            count=0;  
        }
    }
    printf("\nno. of times 1 occured : %d",maxcount);
        

}