#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter numbers (end with -1):\n");

    for (;;) {
        scanf("%d", &num);
        if (num == -1) break;

        int temp = num;
        do {
            printf("%d ", temp);
            temp--;
        } while (temp > 0);

        count++;
        printf("\n");
    }
    printf("Total numbers entered: %d\n", count);
    return 0;
}
/*For each number entered, it prints a countdown from that number to 1.
 Stops when -1 is given, then shows how many numbers were entered.*/