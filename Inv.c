#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void addProduct(struct Product inventory[], int *numProducts) {
    struct Product newProduct;
    
    printf("Enter product ID: ");
    scanf("%d", &newProduct.id);
    
    printf("Enter product name: ");
    scanf("%s", newProduct.name);
    
    printf("Enter quantity: ");
    scanf("%d", &newProduct.quantity);
    
    printf("Enter price: ");
    scanf("%f", &newProduct.price);
    
    inventory[*numProducts] = newProduct;
    (*numProducts)++;
    
    printf("Product added successfully!\n");
}

int searchProduct(struct Product inventory[], int numProducts, int idToSearch) {
    for (int i = 0; i < numProducts; i++) {
        if (inventory[i].id == idToSearch) {
            return i; // Return index of found product
        }
    }
    return -1; // Product not found
}

void updateProduct(struct Product inventory[], int numProducts, int idToUpdate) {
    int index = searchProduct(inventory, numProducts, idToUpdate);
    
    if (index != -1) {
        printf("Enter new quantity: ");
        scanf("%d", &inventory[index].quantity);
        
        printf("Enter new price: ");
        scanf("%f", &inventory[index].price);
        
        printf("Product updated successfully!\n");
    } else {
        printf("Product not found!\n");
    }
}

void deleteProduct(struct Product inventory[], int *numProducts, int idToDelete) {
    int index = searchProduct(inventory, *numProducts, idToDelete);
    
    if (index != -1) {
        // Shift remaining products to fill the gap
        for (int i = index; i < *numProducts - 1; i++) {
            inventory[i] = inventory[i + 1];
        }
        
        (*numProducts)--;
        printf("Product deleted successfully!\n");
    } else {
        printf("Product not found!\n");
    }
}

void displayProducts(struct Product inventory[], int numProducts) {
    printf("%-5s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < numProducts; i++) {
        printf("%-5d %-20s %-10d %-10.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

void mainMenu(struct Product inventory[], int *numProducts) {
    int choice;
    
    do {
        printf("\nMain Menu:\n");
        printf("1. Add Product\n");
        printf("2. Update Product\n");
        printf("3. Delete Product\n");
        printf("4. Display Products\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addProduct(inventory, numProducts);
                break;
            case 2:
                int idToUpdate;
                printf("Enter product ID to update: ");
                scanf("%d", &idToUpdate);
                updateProduct(inventory, *numProducts, idToUpdate);
                break;
            case 3:
                int idToDelete;
                printf("Enter product ID to delete: ");
                scanf("%d", &idToDelete);
                deleteProduct(inventory, numProducts, idToDelete);
                break;
            case 4:
                displayProducts(inventory, *numProducts);
                break;
            case 5:
                printf("Exiting the

