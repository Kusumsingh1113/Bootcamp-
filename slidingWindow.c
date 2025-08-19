// #include<stdio.h>
// void main()
// {
//     int a[100],i,n,j,size,sum,wsum;
//     printf("Enter the no. of elements: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("Enter the array :");
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf(" %d",a[i]);
//     }
//     printf("\n Enter the size of window: ");
//     scanf("%d",&size);
//     printf("\n Enter the sum of window: ");
//     scanf("%d",&wsum);
//     for(i=0;i<=n-size;i++)
//     {
//         sum=0;
//         for(j=i;j<i+size;j++)
//         {
            
//             sum=sum+a[j];
            
//             printf("%d ",a[j]);
//         } 
//     }
//     if(wsum==sum)
//     {
//         for(i=0;i<=n-size;i++)
//         {
//             for(j=i;j<i+size;j++)
//             {
//                 printf("\n");
//                 printf(" sum of window : %d",a[j]);
//             } 
//         }
//     }
//     else
//     {
//         printf("not found");
//     } 
// }

#include<stdio.h>
void main()
{
    int a[100],i,n,j,size,sum,wsum,temp,flag;
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
    printf("\n Enter the size of window: ");
    scanf("%d",&size); 
    printf("\n Enter the sum of window: ");
    scanf("%d",&wsum);

    sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        break; 
    }
    for(i=1;i<n-size+1;i++)
    { 
        if(wsum==sum)
        {
            temp=i-1;
            flag=1;
            break;
        }
        sum=sum-a[i-1]+a[i+size-1];
    }
    if(flag)
    {
        for(i=temp;i<temp+size;i++)
        {
            printf("%d",a[i]);
        }
    }   
}