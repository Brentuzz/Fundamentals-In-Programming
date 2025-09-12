#include <stdio.h>
    
    int main() {
            char name[50];
            int age;
            
            
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your Age: ");
    scanf("%d", &age);
    
//display user information

    printf("\n------ User Information ------\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    
    return 0;
    
}