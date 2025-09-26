#include <stdio.h>

int main() {
    int num;
    printf("Enter numbers (end with -1):\n");
    for (;;) {
        scanf("%d", &num);
        if (num == -1) break; 
        printf("You entered: %d\n", num);
    }
    return 0;
}
/*Keeps asking for numbers and prints them until the user types -1.*/