#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 90)
        printf("Grade: A+\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
