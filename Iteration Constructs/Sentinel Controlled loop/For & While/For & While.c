#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter numbers to sum (end with -1):\n");

    for (;;) {  
        scanf("%d", &num);
        if (num == -1) break;

        while (num > 0) { 
            sum += num;
            break;
        }
    }
    printf("Total sum: %d\n", sum);
    return 0;
}
/*User enters numbers; positive values are added together until -1 is typed, then it prints the total.
*/