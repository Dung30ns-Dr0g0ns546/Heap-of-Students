#ifndef ADDRESS_S_EXITS
#define ADDRESS_S_

#include <string>

class Address{
	protected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	
	public:
		Address();
		void init (std::string street, std::string city,
				std::string state, std::string zip);
		void printAddress();
		
};		
#endif

