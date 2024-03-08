#pragma once
class User {
private:
	double weight;
	double height;
	int CurrentCalorieNeed;
	double BMI;
	double Activity;
	double bmr;
	bool diabetic1;
	bool diabetic2;
	bool gender;
public:
	User(double _weight, double _height, bool _gender);
	double CalculateBMI(double _weight, double _height) const;
	double calculateBMRMen(double weight, double height, double age) const;
	double calculateBMRWomen(double weight, double height, double age) const;
	double calculateTDEE(double bmr, double activityFactor) const;
	~User();

};