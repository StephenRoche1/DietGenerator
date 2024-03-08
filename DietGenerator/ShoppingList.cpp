#include "ShoppingList.h"
#include <string>
#include <vector>

void ShoppingList::AddToList(const std::string& itemName, double itemWeightAsSold, int quantityNeeded) {
    items.emplace_back(itemName, itemWeightAsSold, quantityNeeded);
    std::cout << quantityNeeded << " units of " << itemName << " added to the shopping list.\n";
}

void ShoppingList::UpdateQuantities(const std::vector<std::pair<std::string, int>>& recipeRequirements) {
    for (const auto& requirement : recipeRequirements) {
        const std::string& itemName = requirement.first;
        int requiredQuantity = requirement.second;

        // Check if the item is already in the shopping list
        auto it = std::find_if(items.begin(), items.end(), [&](const ItemDetails& item) {
            return item.itemName == itemName;
            });

        if (it != items.end()) {
            // Update the quantity to ensure it meets the required amount
            it->quantityNeeded = std::max(it->quantityNeeded, requiredQuantity);
        }
        else {
            // Add the item to the shopping list if it's not already there
            items.emplace_back(itemName, 0.0, requiredQuantity);
        }
    }
}

void ShoppingList::DisplayShoppingList() const {
    std::cout << "Shopping List:\n";
    for (const auto& item : items) {
        std::cout << "- " << item.quantityNeeded << " units of " << item.itemName << " (Total Weight: " << item.itemWeightAsSold * item.quantityNeeded << " grams)\n";
    }
}
