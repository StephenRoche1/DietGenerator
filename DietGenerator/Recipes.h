#pragma once
#include "Ingredients.h"
#include <string>
#include<vector>
class Recipe {
private:
	std::string name;
	std::vector<Ingredients> ingredientsList;
	std::string instructions;
	int servingSize;
public:
	Recipe(const std::string& recipeName, const std::vector<Ingredients>& ingredients, const std::string& recipeInstructions, int serving);
	Ingredients calculateTotalNutrients(std::string& name, std::string& type) const;
	void displayRecipe() const;

};