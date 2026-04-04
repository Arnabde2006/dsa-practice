#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float distance;
    
    printf("=== Distance Between Two Cartesian Points ===\n");
    printf("Formula: Distance = sqrt((x2-x1)^2 + (y2-y1)^2)\n\n");
    
    printf("Enter coordinates of Point 1:\n");
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    
    printf("\nEnter coordinates of Point 2:\n");
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    // Calculate distance using distance formula
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    
    printf("\n========================================\n");
    printf("Point 1: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Point 2: (%.2f, %.2f)\n", p2.x, p2.y);
    printf("Distance between points: %.2f units\n", distance);
    printf("========================================\n");
    
    return 0;
}
