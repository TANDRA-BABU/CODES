#include <stdio.h>
#define MAX_ITEMS 5  
// Structure to hold menu items
struct MenuItem 
{
    int id;
    char name[30];
    float price;
};
// Function prototypes
void displayMenu(struct MenuItem menu[], int size);
float takeOrder(struct MenuItem menu[], int size);
void generateBill(float total);

int main() 
{
    struct MenuItem menu[MAX_ITEMS] = 
    {
        {1, "Burger", 77.98},
        {2, "Pizza", 99.20},
        {3, "KFC Chicken (4pcs.)", 120.57},
        {4, "French Fries", 49.90},
        {5, "Coke (500ml)", 45.10}
    };
    int choice;
    float totalBill = 0;
    do 
    {
        printf("\n===== RESTAURANT MANAGEMENT SYSTEM =====\n");
        printf("1. Display Menu\n");
        printf("2. Take Order\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayMenu(menu, MAX_ITEMS);
                break;
            case 2:
                totalBill += takeOrder(menu, MAX_ITEMS);
                break;
            case 3:
                generateBill(totalBill);
                totalBill = 0; // Reset the bill after printing
                break;
            case 4:
                printf("Exiting... Thank you for visiting!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    while (choice != 4);
    return 0;
}
// Function to display menu
void displayMenu(struct MenuItem menu[], int size) 
{
    printf("\n===== MENU =====\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d. %s - Rs. %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
}
// Function to take orders
float takeOrder(struct MenuItem menu[], int size) 
{
    int itemNo, quantity;
    float orderTotal = 0;
    printf("\nEnter item number to order (0 to stop): ");
    while (1)
    {
        scanf("%d", &itemNo);
        if (itemNo == 0) 
        break;
        if (itemNo < 1 || itemNo > size) 
        {
            printf("Invalid item number. Try again: ");
            continue;
        }
        printf("Enter quantity for %s: ", menu[itemNo - 1].name);
        scanf("%d", &quantity);
        orderTotal += menu[itemNo - 1].price * quantity;
        printf("Item added to order! Enter another item or 0 to finish: ");
    }
    return orderTotal;
}
// Function to generate and display bill
void generateBill(float total) 
{
    printf("\n===== BILL =====\n");
    printf("Total Amount: Rs. %.2f\n", total);
    printf("Thank you for dining with us!\n");
}