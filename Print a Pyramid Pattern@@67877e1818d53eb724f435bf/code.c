#include<stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {  // Correctly increment i
        for(j = 1; j <= i; j++) {
            printf(" ");       // Print spaces
        }
        for(k = 1; k <= i; k++) {
            printf("*");       // Print stars
        }
        printf("\n");          // Move to the next line
    }
    return 0;
}