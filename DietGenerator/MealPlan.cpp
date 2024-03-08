#include "MealPlan.h"
#include<string>
#include<vector>
#include <iostream>
MealPlan::MealPlan(const std::string& _name,const std::vector<std::string>& weekdays):planName(_name),days(weekdays){}
void MealPlan::addRecipe(const std::string& day, const std::string& meal, const Recipe& recipe)const {};
void MealPlan::addDish() const {};
void MealPlan::DisplayWeeklyMealPlan()const {};
void MealPlan::RemoveDish() const {};