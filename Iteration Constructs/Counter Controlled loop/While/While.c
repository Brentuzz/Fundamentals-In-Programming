#include <stdio.h>

int main() {
    int i = 2; 
    while(i <= 10) {
    printf("%d ", i); 
    i += 2;
    }
    return 0; 
/*This program starts with i = 2 and uses a while 
loop to run as long as i is less than or equal to 10. 
Inside the loop, it prints the value of i and then increases i by 2. 
This makes the program display only even numbers. 
The loop ends when i becomes greater than 10, so the output is 2 4 6 8 10.*/
}
