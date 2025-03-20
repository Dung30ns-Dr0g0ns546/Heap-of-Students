#include "heapOfAddresses.h"
#include <string>

Address::Address(){
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
}

Address::init(std::string street, std::string city, std::string state, std::string zip){

	getLine(street, city, state, zip);
	
}

Address::printAddress(){

}
