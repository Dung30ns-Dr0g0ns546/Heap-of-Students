#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>

class Student{
	protected:
		std::string firstName;
		std::string lastName;
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
		std::string birthDate;
		std::string expectedGradDate;
		std::string creditHoursCompleted;
	public:
		Student()
		void init (std::string firstName, std::string lastName,
					std::string street, std::string city,
					std::string state, std::string zip,
					std::string birthDate, std::string expectedGradDate,
					std::string creditHoursCompleted;)
		void printStudent();
		};

#endif