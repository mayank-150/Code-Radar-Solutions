#include<stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {         // Loop for rows
        for(j = 1; j <= n - i; j++) { // Loop for spaces
            printf(" ");
        }
        for(k = 1; k <= i; k++) {     // Loop for stars
            printf("*");
        }
        for(k = 2; k <= i; k++) {     // Additional stars for symmetry
            printf("*");
        }
        printf("\n");                 // Move to the next row
    }
    return 0;
}