#include "heapOfDates.h"
#include <string>

Date::Date(){
    
    std::stringstream dateString;

    int year = 0;
    int month = 0;
    int day = 0;
    
}

Date::init(std::string dateString){
    std::stringstream tempDateString(dateString);

    
    std::string tMonth;
    std::string tDay;
    std::string tYear;
    
    getLine(dateString, tMonth, '/');
    getLine(dateString, tDay, '/');
    getLine(dateString, tYear);

    dateString.clear();
    dateString.str("");
    dateString << tMonth << " " << tDay << " " << tYear;
    dateString >> month >> day >> year;
}

Date::printDate(){
    std::cout << dateString << std::endl;
}

