#pragma once
#include <string>

class Student {

private:
	std::string name;
	int idNumber;
	double gpa;

public:

	Student(std::string name, int idNumber, double gpa);

	void setName(std::string n);
	void setIdNumber(int id);
	void setGpa(double g);

	std::string getName() const;
	int getIdNumber() const;
	double getGpa() const;

	void displayDetails() const;

};