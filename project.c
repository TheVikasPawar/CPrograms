#include <stdio.h>
#include <string.h>

// Define the product structure
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Function prototypes
void addProduct(struct Product inventory[], int *numProducts);
int searchProduct(struct Product inventory[], int numProducts, int idToSearch);
void updateProduct(struct Product inventory[], int numProducts, int idToUpdate);
void deleteProduct(struct Product inventory[], int *numProducts, int idToDelete);
void displayProducts(struct Product inventory[], int numProducts);
void mainMenu(struct Product inventory[], int *numProducts);

int main() {
    struct Product inventory[100];  // Maximum 100 products
    int numProducts = 0;  // Current number of products in inventory
    
    mainMenu(inventory, &numProducts);
    
    return 0;
}

void addProduct(struct Product inventory[], int *numProducts) {
    // Implementation to add a new product to the inventory
}

int searchProduct(struct Product inventory[], int numProducts, int idToSearch) {
    // Implementation to search for a product by ID
}

void updateProduct(struct Product inventory[], int numProducts, int idToUpdate) {
    // Implementation to update product details
}

void deleteProduct(struct Product inventory[], int *numProducts, int idToDelete) {
    // Implementation to delete a product from the inventory
}

void displayProducts(struct Product inventory[], int numProducts) {
    // Implementation to display all products in the inventory
}

void mainMenu(struct Product inventory[], int *numProducts) {
    int choice;
    
    do {
        printf("\nInventory Management System\n");
        printf("1. Add Product\n");
        printf("2. Search Product\n");
        printf("3. Update Product\n");
        printf("4. Delete Product\n");
        printf("5. Display Products\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addProduct(inventory, numProducts);
                break;
            case 2: {
                int idToSearch;
                printf("Enter product ID to search: ");
                scanf("%d", &idToSearch);
                int index = searchProduct(inventory, *numProducts, idToSearch);
                if (index != -1) {
                    // Display product details
                } else {
                    printf("Product not found.\n");
                }
                break;
            }
            // Implement cases for other options
            
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);
}

