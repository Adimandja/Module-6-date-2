/* Program name: dateExcept.h
 * Author: Adolphe Dimandja
 * Date last updated: 7/28/2024
 * Purpose: Header file for custom exception classes for the Date class.
 */

#ifndef DATEEXCEPT_H
#define DATEEXCEPT_H

#include <stdexcept>
#include <string>

class invalid_month : public std::invalid_argument {
public:
    explicit invalid_month(const std::string& msg) : std::invalid_argument(msg) {}
};

class invalid_day : public std::invalid_argument {
public:
    explicit invalid_day(const std::string& msg) : std::invalid_argument(msg) {}
};

class invalid_year : public std::invalid_argument {
public:
    explicit invalid_year(const std::string& msg) : std::invalid_argument(msg) {}
};

#endif // DATEEXCEPT_H
