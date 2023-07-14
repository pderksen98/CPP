#include "BitcoinExchange.hpp"

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else {
        return year % 4 == 0;
    }
}

int getDaysInMonth(int month, int year) {
    static std::map<int, int> daysInMonth = {
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31}
    };
    if (month == 2 && isLeapYear(year))
        return 29;
    return (daysInMonth[month]);
}

bool    isDateValid(const std::string& date) 
{
    std::string error_message = "bad input => ";
    error_message.append(date);
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        throw std::runtime_error(error_message);
    
    int  day;
    int  month;
    int  year;

    std::string str_year =  date.substr(0, 4);
    std::string str_month = date.substr(5, 2);
    std::string str_day =   date.substr(8, 2);

    std::stringstream   ss_year(str_year);
    ss_year >> year;
    std::stringstream   ss_month(str_month);
    ss_month >> month;
    std::stringstream   ss_day(str_day);
    ss_day >> day;

    if (year < 2009 || year > 9999)
        throw std::runtime_error(error_message);
    if (month < 1 || month > 12)
        throw std::runtime_error(error_message);
    if (day < 1 || day > getDaysInMonth(month, year))
        throw std::runtime_error(error_message);;

    if (year == 2009 && month == 1 && day == 1)
        throw std::runtime_error(error_message);
    return (true);
}

bool    isValueValid(float value) 
{
    if (value < 0)
        throw std::runtime_error("not a positive number.");
    if (value > 1000)
        throw std::runtime_error("too large number.");
    return (true);
}
