
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int size = 2 * n - 1;  // Total number of rows and columns
    
    // Loop to print the pattern
    for (int i = 0; i < size; i++) {
        for (int j =0; j < size; j++) {
            // Calculate the minimum distance from the edges of the square
           int value = n-(i < j ? ( i < size-j-1 ? i:size-j-1) : (j<size-i-1 ? j:size-i-1));
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>

// int main() {
//     int n;
    
//     scanf("%d",&n);
//     int size = 2 * n - 1;
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) 
//         {
//             int value = n - (i < j ? (i < size - j - 1 ? i : size - j - 1) : (j < size - i - 1 ? j : size - i - 1));
//             printf("%d ", value);
//         }
//         printf("\n");
//     }

//     return 0;
// }
