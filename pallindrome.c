#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],str1[100];
    int i,len,f=0;
    printf("enter string :");
    scanf("%s",str);
    char temp[100];
    len =strlen(str);
    for(i=0;i<len;i++)
    {
        temp[i]=str[i];
    }
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
        str1[i]=str[i];
    }
    for(i=0;i<len;i++)
    {
        if(temp[i]==str1[i])
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("\nThe string is pallindrome");
    }
    else
    {
        printf("\nThe string is not a pallindrome");
    }
    
}