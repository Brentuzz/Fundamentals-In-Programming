#include <stdio.h>

int main() {
    int num = 5;
    printf("Enter numbers (end with -1):\n");
    while (num != -1) {
        scanf("%d", &num);
        if (num != -1)
            printf("You entered: %d\n", num);
    }
    return 0;
}
/*Reads and prints numbers repeatedly; stops when user enters -1.*/