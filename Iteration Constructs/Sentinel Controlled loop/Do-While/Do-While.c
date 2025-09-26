#include <stdio.h>

int main() {
    int num;
    printf("Enter numbers (end with -1):\n");
    do {
        scanf("%d", &num);
        if (num != -1)
            printf("You entered: %d\n", num);
    } while (num != -1);
    return 0;
}

/*Always runs at least once, then continues until user inputs -1.*/