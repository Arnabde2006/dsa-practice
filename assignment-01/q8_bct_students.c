#include <stdio.h>

struct student {
    int roll;
    char name[30];
    char address[50];
    int age;
    float avg_marks;
};

void display(struct student s[12]) {
    printf("\nStudent Details:\n");
    for(int i=0;i<12;i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nAddress: %s", s[i].address);
        printf("\nAge: %d", s[i].age);
        printf("\nAverage Marks: %.2f\n", s[i].avg_marks);
    }
}

int main() {
    struct student s[12];

    for(int i=0;i<12;i++) {
        printf("\nEnter details of student %d\n", i+1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Average Marks: ");
        scanf("%f", &s[i].avg_marks);
    }

    display(s);
    return 0;
}