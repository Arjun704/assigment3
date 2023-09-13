#include <stdio.h>

int main() {
    int side1, side2, side3;
    
    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 != side2 && side2 != side3 && side3 != side1) {
        printf("Scalene\n");
    } else {
        printf("Isosceles\n");
    }
    
    return 0;
}
