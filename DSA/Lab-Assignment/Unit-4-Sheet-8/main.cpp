#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Product class definition
class Product {
public:
    int id;
    std::string name;
    std::string category;
    float price;
    float rating;

    Product(int id, std::string name, std::string category, float price, float rating)
        : id(id), name(name), category(category), price(price), rating(rating) {}
};

// Function to display products
void displayProducts(const std::vector<Product>& products) {
    for (const auto& product : products) {
        std::cout << "ID: " << product.id
                  << ", Name: " << product.name
                  << ", Category: " << product.category
                  << ", Price: " << product.price
                  << ", Rating: " << product.rating << std::endl;
    }
}

// Insertion Sort implementation for sorting by price
void insertionSortByPrice(std::vector<Product>& products) {
    for (size_t i = 1; i < products.size(); ++i) {
        Product key = products[i];
        int j = i - 1;
        while (j >= 0 && products[j].price > key.price) {
            products[j + 1] = products[j];
            --j;
        }
        products[j + 1] = key;
    }
}

// Main function
int main() {
    // Sample product list
    std::vector<Product> products = {
        {101, "ProductA", "Category1", 50.0, 4.5},
        {102, "ProductB", "Category2", 30.0, 4.0},
        {103, "ProductC", "Category1", 20.0, 3.5}
    };

    std::cout << "Original Product List:\n";
    displayProducts(products);

    // Sort products by price using insertion sort
    insertionSortByPrice(products);

    std::cout << "\nProduct List Sorted by Price:\n";
    displayProducts(products);

    return 0;
}
