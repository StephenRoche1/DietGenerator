#pragma once
class Allergen {
private:
    bool contains;

public:
    // Constructor
    Allergen(bool hasAllergen) : contains(hasAllergen) {}

    // Getter function
    bool containsAllergen() const { return contains; }
};