#include "Recipes.h"
#include "Ingredients.h"
#include <iostream>
#include<string>
Recipe::Recipe(const std::string& recipeName, const std::vector<Ingredients>& ingredients, const std::string& recipeInstructions, int serving)
    : name(recipeName), ingredientsList(ingredients), instructions(recipeInstructions), servingSize(serving) {}

// Method to calculate total nutrient values for the entire recipe
Ingredients Recipe::calculateTotalNutrients(std::string& name, std::string& type) const {
    Ingredients totalNutrients(
        name, type, 150.0, 100.0, 5.0, 200.0, 0.5, 0.1,0.2, 2.5, 10.0, 1.5, 0.2, 30.0, 0.1, 0.5, 1.0, 15.0, 2.0, 0.5, false, false, false, false
    );

    for (const auto& ingredient : ingredientsList) {
        totalNutrients.setCarbohydrates(totalNutrients.getCarbohydrates() + ingredient.getCarbohydrates());
        totalNutrients.setProteins(totalNutrients.getProteins() + ingredient.getProteins());
        totalNutrients.setFats(totalNutrients.getFats() + ingredient.getFats());
        totalNutrients.setVitaminA(totalNutrients.getVitaminA() + ingredient.getVitaminA());
        totalNutrients.setVitaminB1(totalNutrients.getVitaminB1() + ingredient.getVitaminB1());
        totalNutrients.setVitaminB2(totalNutrients.getVitaminB2() + ingredient.getVitaminB2());
        totalNutrients.setVitaminB3(totalNutrients.getVitaminB3() + ingredient.getVitaminB3());
        totalNutrients.setVitaminB5(totalNutrients.getVitaminB5() + ingredient.getVitaminB5());
        totalNutrients.setVitaminB6(totalNutrients.getVitaminB6() + ingredient.getVitaminB6());
        totalNutrients.setVitaminB7(totalNutrients.getVitaminB7() + ingredient.getVitaminB7());
        totalNutrients.setVitaminB8(totalNutrients.getVitaminB8() + ingredient.getVitaminB8());
        totalNutrients.setVitaminB9(totalNutrients.getVitaminB9() + ingredient.getVitaminB9());
        totalNutrients.setVitaminB12(totalNutrients.getVitaminB12() + ingredient.getVitaminB12());
        totalNutrients.setVitaminC(totalNutrients.getVitaminC() + ingredient.getVitaminC());
        totalNutrients.setVitaminD(totalNutrients.getVitaminD() + ingredient.getVitaminD());
        totalNutrients.setVitaminE(totalNutrients.getVitaminE() + ingredient.getVitaminE());
        totalNutrients.setVitaminK(totalNutrients.getVitaminK() + ingredient.getVitaminK());
    }

    // Adjust nutrient values based on serving size
    double servingFactor = static_cast<double>(servingSize) / 100.0;
    totalNutrients.setCarbohydrates(totalNutrients.getCarbohydrates() * servingFactor) ;
    totalNutrients.setProteins(totalNutrients.getProteins() * servingFactor) ;
    totalNutrients.setFats(totalNutrients.getFats() *servingFactor) ;
    totalNutrients.setVitaminA(totalNutrients.getVitaminA() * servingFactor);
    totalNutrients.setVitaminB1(totalNutrients.getVitaminB1() * servingFactor);
    totalNutrients.setVitaminB2(totalNutrients.getVitaminB2() * servingFactor);
    totalNutrients.setVitaminB3(totalNutrients.getVitaminB3() * servingFactor);
    totalNutrients.setVitaminB5(totalNutrients.getVitaminB5() * servingFactor);
    totalNutrients.setVitaminB6(totalNutrients.getVitaminB6() * servingFactor);
    totalNutrients.setVitaminB7(totalNutrients.getVitaminB7() * servingFactor);
    totalNutrients.setVitaminB8(totalNutrients.getVitaminB8() * servingFactor);
    totalNutrients.setVitaminB9(totalNutrients.getVitaminB9() * servingFactor);
    totalNutrients.setVitaminB12(totalNutrients.getVitaminB12() * servingFactor);
    totalNutrients.setVitaminC(totalNutrients.getVitaminC() * servingFactor);
    totalNutrients.setVitaminD(totalNutrients.getVitaminD() * servingFactor);
    totalNutrients.setVitaminE(totalNutrients.getVitaminE() * servingFactor);
    totalNutrients.setVitaminK(totalNutrients.getVitaminK() * servingFactor);

    return totalNutrients;
}

// Display function to print recipe information
void Recipe::displayRecipe() const {
    std::cout << "Recipe: " << name << std::endl;
    std::cout << "Ingredients:" << std::endl;
    for (const auto& ingredient : ingredientsList) {
        std::cout << "- " << ingredient.getCarbohydrates() << "g Carbs, "
            << ingredient.getProteins() << "g Proteins, "
            << ingredient.getFats() << "g Fats" << std::endl;
    }
}
