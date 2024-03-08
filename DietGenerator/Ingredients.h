#pragma once
#include <string>
#include "Allergen.h"
class Ingredients {
private:
    std::string name;
    std::string type;

    double portionWeight; // in grams
    double calories;
    double carbohydrates;
    double proteins;
    double fats;

    // Vitamins
    double vitaminA;
    double vitaminB1;
    double vitaminB2;
    double vitaminB3;
    double vitaminB5;
    double vitaminB6;
    double vitaminB7;
    double vitaminB8;
    double vitaminB9;
    double vitaminB12;
    double vitaminC;
    double vitaminD;
    double vitaminE;
    double vitaminK;
    Allergen gluten;
    Allergen dairy;
    Allergen nuts;
    Allergen shellfish;
public:
    Ingredients(std::string& _name, std::string& _type, double _portionWeight, double _calories , double carbs,
        double _fats, double _VitA, double _VitB1, double _VitB2, double _VitB3, double _VitB5, double _VitB6,
        double _VitB7, double _VitB8, double _VitB9, double _VitB12, double _VitC, double _VitD,
        double _VitE, double _VitK, bool hasGluten, bool hasDairy, bool hasNuts, bool hasShellfish);
        // constructor implementation
    

    double getCarbohydrates() const;
    double getProteins() const;
    double getFats() const;

    // Getter functions for vitamins
    double getVitaminA() const;
    double getVitaminB1() const;
    double getVitaminB2() const;
    double getVitaminB3() const;
    double getVitaminB5() const;
    double getVitaminB6() const;
    double getVitaminB7() const;
    double getVitaminB8() const;
    double getVitaminB9() const;
    double getVitaminB12() const;
    double getVitaminC() const;
    double getVitaminD() const;
    double getVitaminE() const;
    double getVitaminK() const;

    // Getter functions for weight and calories of the ingredients
    double getWeight() const;
    double getCalories() const;
    //Setter functions
    void setCarbohydrates(double value);
    void setProteins(double value);
    void setFats(double value);
    void setVitaminA(double value);
    void setVitaminB1(double value);
    void setVitaminB2(double value);
    void setVitaminB3(double value);
    void setVitaminB5(double value);
    void setVitaminB6(double value);
    void setVitaminB7(double value);
    void setVitaminB8(double value);
    void setVitaminB9(double value);
    void setVitaminB12(double value);
    void setVitaminC(double value);
    void setVitaminD(double value);
    void setVitaminE(double value);
    void setVitaminK(double value);

    bool containsGluten() const;
    bool containsDairy() const;
    bool containsNuts() const;
    bool containsShellfish() const;
    void displayInfo() const;
};