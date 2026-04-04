#include <stdio.h>

struct dob {
    int day;
    int month;
    int year;
};

int main() {
    struct dob d;
    int total;

    printf("=== Birth Date Total Days Calculator ===\n");
    printf("(Approximate calculation: 1 year = 365 days, 1 month = 30 days)\n\n");
    
    printf("Enter Day: ");
    scanf("%d", &d.day);
    
    printf("Enter Month: ");
    scanf("%d", &d.month);
    
    printf("Enter Year: ");
    scanf("%d", &d.year);

    // Calculate total days (approximate)
    total = d.year * 365 + d.month * 30 + d.day;

    printf("\n========================================\n");
    printf("Birth Date: %02d/%02d/%d\n", d.day, d.month, d.year);
    printf("Total days (approximate) = %d days\n", total);
    printf("========================================\n");
    
    return 0;
}
