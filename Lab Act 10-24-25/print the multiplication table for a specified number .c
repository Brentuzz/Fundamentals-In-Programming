#include <stdio.h>

int main() {
    int num = 7; // The number you want the multiplication table for
    int i;
    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
