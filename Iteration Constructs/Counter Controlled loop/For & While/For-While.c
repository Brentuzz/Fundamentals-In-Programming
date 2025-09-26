#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    while (i <= 5) {
        printf("%d^2 = %d\n", i, i * i);
        i++;
    }

    return 0;
}

/*This program first uses a for loop to print numbers from 1 to 5. 
After that, a while loop is supposed to print the squares of numbers 
from 1 to 5, but since i becomes 6 after the for loop, 
the while loop does not run.
*/