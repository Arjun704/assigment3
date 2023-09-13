#include <stdio.h>

int main() {
    int digit;
    
    printf("Enter a digit: ");
    scanf("%d", &digit);
    
    if (digit >= 1 && digit <= 9) {
        switch (digit) {
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            case 6: printf("Six\n"); break;
            case 7: printf("Seven\n"); break;
            case 8: printf("Eight\n"); break;
            case 9: printf("Nine\n"); break;
        }
    } else if (digit > 9) {
        if (digit % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } else {
        printf("Negative\n");
    }
    
    return 0;
}
