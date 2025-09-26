#include <stdio.h>

int main() {
    int i;
    for (i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    i = 10;
    do {
        printf("%d ", i);
        i -= 2;
    } while (i >= 2);

    return 0;
}
/*This program uses a for loop to print even numbers from 2 to 10 
in ascending order. Then, it uses a do-while loop to print even 
numbers from 10 down to 2 in descending order.*/