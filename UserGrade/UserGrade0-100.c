#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);
    
    switch (grade / 10) {

        case 10: // 100
        case 9:  // 90–99
            printf("Equivalent Grade: A\n");
            break;
        case 8:  // 80–89
            printf("Equivalent Grade: B\n");
            break;
        case 7:  // 70–79
            printf("Equivalent Grade: C\n");
            break;
        case 6:  // 60–0
        case 5:  // 50–59
        case 4:  // 40–49
        case 3:  // 30–39
        case 2:  // 20–29
        case 1:  // 10–19
        case 0:  // 0–9
        
            printf("Equivalent Grade: Failed\n");
            break;
        default:
            printf("Invalid grade. Please enter 0–100.\n");
    }

    return 0;
}