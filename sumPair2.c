#include<stdio.h>
#define max 1000
void findpair(int a[],int n,int gsum)
{
    int i,pair;
    printf("given sum= %d",gsum);
    int hash[max]={0};
    for(i=0;i<n;i++)
    {
        pair=gsum-a[i];
        if(pair>=0 && hash[pair]>0)
        {
            printf("%d+%d=%d",pair,a[i],gsum);
        }
        hash[a[i]]++;
    }
}
void main()
{
    int a[]={1,3,4,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int gsum;

    printf("Enter the sum of pair to match : ");
    scanf("%d",&gsum);

    findpair(a,n,gsum);
}