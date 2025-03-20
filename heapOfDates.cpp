#include "heapOfDates.h"
#include <string>

Date::Date(){
    std::string sYear;
    std::string sMonth;
    std::string sDay;
    std::stringstream dateString;

    int year = 0;
    int month = 0;
    int day = 0;
    
}

Date::init(std::string dateString){
    getLine(dateString, month, '/');
    getLine(dateString, day, '/');
    getLine(dateString, year);

    dateString.clear();
    dateString.str("");
    dateString << sMonth << " " << sDay << "" << sYear;
    dateString >> month >> day >> year;
}

Date::printDate(){
    System.out.println();
}

