#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Negative\n");
    } else if (num == 0) {
        printf("Zero\n");
    } else {
        printf("Positive\n");
    }
    
    return 0;
}
