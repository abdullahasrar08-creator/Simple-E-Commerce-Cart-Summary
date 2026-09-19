#include <stdio.h>
int main() {
    char items[4][20] = {"Shirt", "Jeans", "Shoes", "Watch"};
    int prices[4] = {500, 1200, 1500, 2000};

    int cart[4] = {0, 0, 0, 0};
    int item_choice, total_bill = 0;
    printf("=== Simple Shop Checkout ===\n");
    while (1) {
        printf("\nAvailable Items:\n");
        for (int i = 0; i < 4; i++) {
            printf("%d. %s - Rs. %d\n", i + 1, items[i], prices[i]);
        }
        printf("5. Checkout & Exit\n");
        printf("Select item ID to add to cart: ");
        scanf("%d", &item_choice);

        if (item_choice >= 1 && item_choice <= 4) {
            cart[item_choice - 1]++;
            printf("%s added to cart!\n", items[item_choice - 1]);
        }
        else if (item_choice == 5) {
            break;
        }
        else {
            printf("Invalid selection.\n");
        }
    }
    printf("\n--- Final Bill Receipt ---\n");
    for (int i = 0; i < 4; i++) {
        if (cart[i] > 0) {
            int item_cost = cart[i] * prices[i];
            printf("%s x %d = Rs. %d\n", items[i], cart[i], item_cost);
            total_bill += item_cost;
        }
    }
    printf("---------------------------\n");
    printf("Total Payable Amount: Rs. %d\n", total_bill);

    return 0;
}
