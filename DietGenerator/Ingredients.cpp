#include "Ingredients.h"
#include <iostream>
using namespace std;
Ingredients::Ingredients(std::string& _name, std::string& _type, double _portionWeight, double _calories,double carbs,
    double _fats, double _VitA, double _VitB1, double _VitB2, double _VitB3, double _VitB5, double _VitB6,
    double _VitB7, double _VitB8, double _VitB9, double _VitB12, double _VitC, double _VitD,
    double _VitE, double _VitK, bool hasGluten, bool hasDairy, bool hasNuts, bool hasShellfish)
    : name(_name), type(_type),carbohydrates(carbs), portionWeight(_portionWeight), calories(_calories), fats(_fats),
    vitaminA(_VitA), vitaminB1(_VitB1), vitaminB2(_VitB2), vitaminB3(_VitB3), vitaminB5(_VitB5),
    vitaminB6(_VitB6), vitaminB7(_VitB7), vitaminB8(_VitB8), vitaminB9(_VitB9), vitaminB12(_VitB12),
    vitaminC(_VitC), vitaminD(_VitD), vitaminE(_VitE), vitaminK(_VitK),
    gluten(hasGluten), dairy(hasDairy), nuts(hasNuts), shellfish(hasShellfish) {}
double Ingredients::getCarbohydrates() const { return carbohydrates; }
double Ingredients::getProteins() const { return proteins; }
double Ingredients::getFats() const { return fats; }

// Getter functions for vitamins
double Ingredients::getVitaminA() const { return vitaminA; }
double Ingredients::getVitaminB1() const { return vitaminB1; }
double Ingredients::getVitaminB2() const { return vitaminB2; }
double Ingredients::getVitaminB3() const { return vitaminB3; }
double Ingredients::getVitaminB5() const { return vitaminB5; }
double Ingredients::getVitaminB6() const { return vitaminB6; }
double Ingredients::getVitaminB7() const { return vitaminB7; }
double Ingredients::getVitaminB8() const { return vitaminB8; }
double Ingredients::getVitaminB9() const { return vitaminB9; }
double Ingredients::getVitaminB12() const { return vitaminB12; }
double Ingredients::getVitaminC() const { return vitaminC; }
double Ingredients::getVitaminD() const { return vitaminD; }
double Ingredients::getVitaminE() const { return vitaminE; }
double Ingredients::getVitaminK() const { return vitaminK; }
// Setter functions
void Ingredients::setCarbohydrates(double value) { carbohydrates = value; }
void Ingredients::setProteins(double value) { proteins = value; }
void Ingredients::setFats(double value) { fats = value; }
void Ingredients::setVitaminA(double value) { vitaminA = value; }
void Ingredients::setVitaminB1(double value) { vitaminB1 = value; }
void Ingredients::setVitaminB2(double value) { vitaminB2 = value; }
void Ingredients::setVitaminB3(double value) { vitaminB3 = value; }
void Ingredients::setVitaminB5(double value) { vitaminB5 = value; }
void Ingredients::setVitaminB6(double value) { vitaminB6 = value; }
void Ingredients::setVitaminB7(double value) { vitaminB7 = value; }
void Ingredients::setVitaminB8(double value) { vitaminB8 = value; }
void Ingredients::setVitaminB9(double value) { vitaminB9 = value; }
void Ingredients::setVitaminB12(double value) { vitaminB12 = value; }
void Ingredients::setVitaminC(double value) { vitaminC = value; }
void Ingredients::setVitaminD(double value) { vitaminD = value; }
void Ingredients::setVitaminE(double value) { vitaminE = value; }
void Ingredients::setVitaminK(double value) { vitaminK = value; }
// Getter functions for weight and calories
double Ingredients::getWeight() const { return portionWeight; }
double Ingredients::getCalories() const { return calories; }

// Getter functions for allergens
bool Ingredients::containsGluten() const { return gluten.containsAllergen(); }
bool Ingredients::containsDairy() const { return dairy.containsAllergen(); }
bool Ingredients::containsNuts() const { return nuts.containsAllergen(); }
bool Ingredients::containsShellfish() const { return shellfish.containsAllergen(); }

// Display function to print nutrient and allergen information
void Ingredients::displayInfo() const {
    std::cout << "Nutrient Information per 100g:" << std::endl;
    std::cout << "Carbohydrates: " << carbohydrates << "g" << std::endl;
    std::cout << "Proteins: " << proteins << "g" << std::endl;
    std::cout << "Fats: " << fats << "g" << std::endl;
    std::cout << "Vitamin A: " << vitaminA << "mcg" << std::endl;
    std::cout << "Vitamin B1: " << vitaminB1 << "mg" << std::endl;
    std::cout << "Vitamin B2: " << vitaminB2 << "mg" << std::endl;
    std::cout << "Vitamin B3: " << vitaminB3 << "mg" << std::endl;
    std::cout << "Vitamin B5: " << vitaminB5 << "mg" << std::endl;
    std::cout << "Vitamin B6: " << vitaminB6 << "mg" << std::endl;
    std::cout << "Vitamin B7: " << vitaminB7 << "mcg" << std::endl;
    std::cout << "Vitamin B9: " << vitaminB9 << "mcg" << std::endl;
    std::cout << "Vitamin B12: " << vitaminB12 << "mcg" << std::endl;
    std::cout << "Vitamin C: " << vitaminC << "mg" << std::endl;
    std::cout << "Vitamin D: " << vitaminD << "mcg" << std::endl;
    std::cout << "Vitamin E: " << vitaminE << "mg" << std::endl;
    std::cout << "Vitamin K: " << vitaminK << "mcg" << std::endl;
    std::cout << "Weight: " << portionWeight << "g" << std::endl;
    std::cout << "Calories: " << calories << "kcal" << std::endl;
    std::cout << "Allergens:" << std::endl;
    std::cout << "Contains Gluten: " << (containsGluten() ? "Yes" : "No") << std::endl;
    std::cout << "Contains Dairy: " << (containsDairy() ? "Yes" : "No") << std::endl;
    std::cout << "Contains Nuts: " << (containsNuts() ? "Yes" : "No") << std::endl;
    std::cout << "Contains Shellfish: " << (containsShellfish() ? "Yes" : "No") << std::endl;}