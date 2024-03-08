#include "User.h"
User::User(double _weight, double _height, bool _gender) : weight(_weight), height(_height), gender(_gender) {};
double User::CalculateBMI(double _weight, double _height) const {
	double bmi = _weight / (_height * _height);
	return bmi;
};
double User::calculateBMRMen(double weight, double height, double age) const {
    return 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
}

// Function to calculate BMR based on Harris-Benedict equation for women
double User::calculateBMRWomen(double weight, double height, double age) const {
    return 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
}

// Function to calculate Total Daily Energy Expenditure (TDEE) based on activity level
double User::calculateTDEE(double bmr, double activityFactor) const {
    return bmr * activityFactor;
}
