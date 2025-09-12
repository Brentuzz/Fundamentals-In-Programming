#include <stdio.h>

int main()  {
    int num1, num2, sum;
    
    //Input of Numbers
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    //calculations
    printf("\n-------------RESULTS---------------\n");
    printf("The sum is: %d\n", sum);

    return 0;
}