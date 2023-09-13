#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }
    
    return 0;
}
