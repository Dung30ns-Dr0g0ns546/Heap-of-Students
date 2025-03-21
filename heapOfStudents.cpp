#include "heapOfStudents.h"
#include <string>

Student::Student(){
	std::string studentString;
	firstName "";
	lastName "";
	address "";
	dob "";
	expectedGrad "";
	creditHoursCompleted ""; 
}

Student::init(std::string studentString){

	Student::firstName = firstName;
	Student::lastName = lastName;
	Student::address = address;
	Student::dob = dob;
	Student::expectedGrad = expectedGrad;
	Student::creditHoursCompleted = creditHoursCompleted;
}

Student::printStudent(){
	std::cout << firstName << lastName << address << dob << expectedGrad << creditHoursCompleted << std::endl;
}