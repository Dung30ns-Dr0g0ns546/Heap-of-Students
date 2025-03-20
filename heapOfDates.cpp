#include "heapOfDates.h"
#include <string>

Date::Date(){
    
    std::stringstream dateString;

    int year = 0;
    int month = 0;
    int day = 0;
    
}

Date::init(std::string dateString){
    std::stringstream tempDateString
    
    std::string tMonth;
    std::string tDay;
    std::string tYear;
    
    getLine(tempDateString, tMonth, '/');
    getLine(tempDateString, tDay, '/');
    getLine(tempDateString, tYear);

    dateString.clear();
    dateString.str("");
    dateString << sMonth << " " << sDay << " " << sYear;
    dateString >> month >> day >> year;
}

Date::printDate(){
    std::cout << dateString << std::endl;
}

