#include <stdio.h>

int main() {
    int num, fact = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial cannot be calculated for negative numbers.\n");
    } else {
        
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}
