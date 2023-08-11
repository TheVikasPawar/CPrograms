struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
// Function to add a new product to the inventory
void addProduct(struct Product inventory[], int *numProducts) {
    // Prompt user for product details and add to the array
}

// Function to search for a product by name or ID
int searchProduct(struct Product inventory[], int numProducts, int idToSearch) {
    // Return the index of the found product, or -1 if not found
}

// Function to update product information
void updateProduct(struct Product inventory[], int numProducts, int idToUpdate) {
    // Update product details based on user input
}

// Function to delete a product from the inventory
void deleteProduct(struct Product inventory[], int *numProducts, int idToDelete) {
    // Delete the product and shift array elements
}

// Function to display all products in the inventory
void displayProducts(struct Product inventory[], int numProducts) {
    // Display details of all products in a formatted manner
}

// Main menu function
void mainMenu(struct Product inventory[], int *numProducts) {
    // Display menu options and handle user input to perform operations
}
int main() {
    struct Product inventory[100];  // Maximum 100 products
    int numProducts = 0;  // Current number of products in inventory
    
    mainMenu(inventory, &numProducts);
    Add, Search, Update, Delete, Display, Exit
    return 0;
}

