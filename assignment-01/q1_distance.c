#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;
    
    printf("=== Add Two Distances ===\n");
    printf("(Note: 12 inches = 1 foot)\n\n");
    
    printf("Enter 1st distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inch);
    
    printf("\nEnter 2nd distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inch);

    // Add feet and inches separately
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert inches to feet if >= 12
    if (sum.inch >= 12.0) {
        sum.feet++;
        sum.inch -= 12.0;
    }

    printf("\n--- Result ---\n");
    printf("Sum = %d feet %.1f inches\n", sum.feet, sum.inch);
    printf("Or: %d'-%.1f\"\n", sum.feet, sum.inch);
    
    return 0;
}
