#pragma once
#include "Recipes.h"
#include <string>
#include <vector>
class MealPlan {
private:
	std::string planName;
	std::vector<std::string> days;
	std::vector<std::vector<Recipe>> meals;
public:
	MealPlan(const std::string& _name, const std::vector<std::string>& weekdays);
	void addRecipe(const std::string& day, const std::string& meal, const Recipe& recipe)const;
	void DisplayWeeklyMealPlan() const;
	void RemoveDish() const;// in case the user sees a recipe that gets past the system they can remove it from the plan
	void addDish() const;//To allow a user to select a dish from the catalogue to replace the removed dish
	~MealPlan();
};