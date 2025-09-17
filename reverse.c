#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],str1[100];
    int i,len,f=0;
    printf("enter string :");
    scanf("%s",str);
    len =strlen(str);
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}