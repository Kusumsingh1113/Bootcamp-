#include<stdio.h>
void main()
{
    int a[10],n,i,min;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int rightmax=a[n],leftmax=a[0];
    for(i=1;i<n;i++)
    {
        rightmax=a[i];
        for(int j=i;j<n;j++)
        {
            if(a[j]>rightmax)
            {
                rightmax=a[j];
            }
        }
        for(int j=0;j<i;j++)
        {
            if(a[i]>leftmax)
            {
                leftmax=a[i];
            }
        }
    }
    printf("Right max: %d",rightmax);
    printf("\nLeft max: %d",leftmax);
    min=(leftmax<rightmax)?leftmax:rightmax;
    printf("\nmin: %d",min);
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum +(4-i);
    }
    printf("\nTotal water that can be traped: %d",sum);
}
