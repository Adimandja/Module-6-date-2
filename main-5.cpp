/* Program name: main.cpp
 * Author: Adolphe Dimandja
 * Date last updated: 7/28/2024
 * Purpose: Sample test program to test the Date class functionality.
 */

#include "date.h"
#include <iostream>

int main() {
    try {
        Date date1(2, 29, 2021);  // Invalid date, should throw an exception
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Date date2(2, 29, 2020);  // Valid leap year date
        std::cout << "Date created: " << date2 << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Date date3;
        std::cin >> date3;  // Input a date
        std::cout << "Date entered: " << date3 << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
