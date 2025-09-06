#include<stdio.h>
#include<string.h>
// void main()
// {
//     char str[10],str1[10];
//     int i,j,count,k=str[0];
//     printf("Enter the string :");
//     scanf("%s",str);
//     int len=strlen(str);
//     for(i=0;i<len;i++)
//     {
//         for(j=i+1;j<len;j++)   
//         {
//             if(str[i]!=str[j])
//             {
//                 str1[i]=str[i];
//                 count=count+1;
//             }
//         }     
//     }
//     printf("longest length is: %d ",count);
//     printf("Result: %s\n", str);

// }

// void main()
// {
//     char str[100],f[26];
//     int max=0,i,j,len;
//     int curr=0;
//     char ch;
//     printf("Enter the string :");
//     scanf("%s",str);
//     len=strlen(str);
//     for(i=0;i>len;i++)
//     {
//         for(j=i;j<len;j++)
//         {
//             ch=str[i];
//             f[ch-'a']++;
            
//         }
//     }
// }


int main() {
    char str[100];
    int i, j, max = 0,freq[26];
    int len;
    
    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        int freq[26] = {0}; 
        int curr = 0;

        for (j = i; j < len; j++) 
        {
            char ch = str[j];

            if (freq[ch - 'a'] == 0) 
            {
                freq[ch - 'a'] = 1;
                curr++;
                if (curr > max)
                    max = curr;
            } 
            else 
            {
                break; 
            }
        }
    }

    printf("Length of longest unique substring: %d\n", max);
    printf("%s",str);
    return 0;
}
