#pragma once
#include <string>
#include <vector>
#include <iostream>

class ShoppingList {
private:
    struct ItemDetails {
        std::string itemName;
        double itemWeightAsSold;
        int quantityNeeded;
        double totalCost;

        ItemDetails(const std::string& name, double weight, int quantity)
            : itemName(name), itemWeightAsSold(weight), quantityNeeded(quantity), totalCost(0.0) {}
    };

    std::vector<ItemDetails> items;

public:
    ShoppingList() {}

    void AddToList(const std::string& itemName, double itemWeightAsSold, int quantityNeeded);

    void UpdateQuantities(const std::vector<std::pair<std::string, int>>& recipeRequirements);

    void DisplayShoppingList() const;

    ~ShoppingList() {}
};
