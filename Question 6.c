#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}