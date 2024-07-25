#include <iostream>
#include "Student.h"
#include <string>

int main() {

	std::string name;
	int idNumber;
	double gpa;

	std::cout << "Enter the student name:" << " " << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter the student id number" << " " << std::endl;
	std::cin >> idNumber;
	std::cout << "Enter the GPA:" << " " << std::endl;
	std::cin >> gpa;

	Student stud(name, idNumber, gpa);

	stud.displayDetails();
}