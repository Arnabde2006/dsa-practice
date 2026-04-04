#include <stdio.h>

// Define complex structure using typedef
typedef struct {
    float real;
    float imag;
} complex;

int main() {
    complex c1, c2, sum, diff;
    
    printf("=== Complex Number Operations ===\n");
    printf("(Using typedef for structure)\n\n");
    
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);
    
    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);

    // Addition of complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    
    // Subtraction of complex numbers
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    printf("\n========================================\n");
    printf("       COMPLEX NUMBER OPERATIONS\n");
    printf("========================================\n");
    
    printf("Complex Number 1: %.1f + %.1fi\n", c1.real, c1.imag);
    printf("Complex Number 2: %.1f + %.1fi\n", c2.real, c2.imag);
    
    printf("\n--- Addition ---\n");
    printf("Sum: %.1f + %.1fi\n", sum.real, sum.imag);
    
    printf("\n--- Subtraction ---\n");
    printf("Difference: %.1f + %.1fi\n", diff.real, diff.imag);
    printf("========================================\n");
    
    return 0;
}
