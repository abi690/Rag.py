#include <stdio.h>

int main() {
    int choice, qty, price;
    int total;

    printf("---- Welcome to Restaurant ----\n");
    printf("1. Burger - 120\n");
    printf("2. Pizza - 250\n");
    printf("3. Sandwich - 80\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    if (choice == 1)
        price = 120;
    else if (choice == 2)
        price = 250;
    else if (choice == 3)
        price = 80;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    total = price * qty;

    printf("Total Bill Amount: %d\n", total);
    printf("Thank you! Visit Again\n");

    return 0;
}
