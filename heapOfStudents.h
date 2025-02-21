#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "heapOfDates.h"
#include "heapOfAddresses.h"


class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Address* address;
		Date* dob;
		Date* expectedGrad;
		std::string creditHoursCompleted;
	public:
		Student()
		Student(std::string studentString);
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		std::string getLastName();
		};

#endif