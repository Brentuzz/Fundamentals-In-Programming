#include <stdio.h>

int main() {

    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    i = 1; 
    while (i <= 5) {
        printf("%d^2 = %d\n", i, i * i);
        i++;
    }
return 0;
}

/*The for loop prints numbers 1 to 5, then the while loop
continues by printing the square of each number from 1 to 5.*/