#include <stdio.h>

int main() {
    float length1, breadth1, area1;
    float length2, breadth2, area2;
    
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &length1, &breadth1);
    
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &length2, &breadth2);
    
    area1 = length1 * breadth1;
    area2 = length2 * breadth2;
    
    if (area1 > area2) {
        printf("Rectangle 1 is larger (Length = %.2f, Breadth = %.2f)\n", length1, breadth1);
    } else if (area2 > area1) {
        printf("Rectangle 2 is larger (Length = %.2f, Breadth = %.2f)\n", length2, breadth2);
    } else {
        printf("Both rectangles have the same area\n");
    }
    
    return 0;
}
