#include <iostream>
#include <string>
#include "Student.h"

Student::Student(std::string n, int id, double g)
	: 
	name(n), 
	idNumber(id), 
	gpa(g)
{}

void Student::setName(std::string n) {
	std::string name = n;
}

void Student::setIdNumber(int id) {
	int idNumber = id;
}
void Student::setGpa(double g){
	double gpa = g;
}

std::string Student::getName() const {
	return name;
}

int Student::getIdNumber() const {
	return idNumber;
}

double Student::getGpa() const {
	return gpa;
}

void Student::displayDetails() const {
	std::cout << "Student details:" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Student name:" << " " << name << std::endl;
	std::cout << "Student name:" << " " << idNumber << std::endl;
	std::cout << "Student name:" << " " << gpa << std::endl;
}
