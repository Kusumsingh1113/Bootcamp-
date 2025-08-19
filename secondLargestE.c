#include<stdio.h>
void main()
{
    int a[100],i,n,large,second;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter the array :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    if(large<a[0] && second>a[1])
        {
            large=a[0];
            second=a[1];
        }
    else
        {
            large=a[1];
            second=a[0];
        }
    printf("\n large : %d",large);
    printf("\n second :%d\n",second);
    for(i=0;i<=n;i++)
    {
        if(a[i]>large)
        {
            second=large;
            large=a[i];
        }
        else if(a[i]<large && a[i]>second)
        {
            second=a[i];
        }
    }
    printf("\n largest element is : %d",large);
    printf("\n second largest element is : %d",second);

}
/*
#include<stdio.h>
int secondlargest(int[],int);
int secondlargest(int a[],int n){
    int secondlargest=a[0];
    int largest =a[0];
    for(int i = 1; i<n; i++){
        if (a[i] > largest){
            secondlargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondlargest && a[i] != largest){
            secondlargest = a[i];
        }
        
    }
    return secondlargest;
}
void main(){
    int n,a[100];
    printf("enter the no of element in array");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("enter the element of array");
        scanf("%d",&a[i]);
    }
    secondlargest(a,n);
    printf("%d",secondlargest(a,n));
}
*/