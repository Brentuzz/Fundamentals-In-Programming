#include <stdio.h>

int main() {
    int choice, qty;
    float price, total=0, money=1000;
    char again;

    printf("You have 1000 pesos\n");

    do {
        printf("\nMenu:\n");
        printf("1. Vegetable (54.5/kg)\n");
        printf("2. Fruits (120/kg)\n");
        printf("3. Milk (90/pack)\n");
        printf("4. Soap (29.45/bar)\n");
        printf("5. Shampoo (140/bottle)\n");

        printf("Enter choice (1-5): ");
        scanf("%d",&choice);
        printf("Enter quantity: ");
        scanf("%d",&qty);

        switch(choice) {
            case 1: price=54.5*qty; break;
            case 2: price=120*qty; break;
            case 3: price=90*qty; break;
            case 4: price=29.45*qty; break;
            case 5: price=140*qty; break;
            default: price=0; printf("Invalid choice!\n");
        }

        total += price;
        printf("Do you want to purchase again? (Y/N): ");
        printf("\nMoney left: %.2f\n", money - total);
        scanf(" %c",&again);

    } while(again=='Y'||again=='y');

    printf("\nTotal purchase: %.2f\n", total);
    printf("Your change: %.2f\n", money - total);

    return 0;
}