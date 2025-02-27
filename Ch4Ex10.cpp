/*
    Program File Name: Ch4Ex10.cpp
    Programmer: Gabriel Inocentes
    Date: February 27, 2024
    Requirements:
    Create a program that asks the user to input their height and weight, then calculates their BMI (Body Mass Index), declaring if they have optimal weight, are underweight, or are overweight
*/

#include <iostream>
using namespace std;

int main()
{
    int month;
    int year;
    int days;

    cout << "Enter a month (1-12): ";
    cin >> month;
    
    while (month < 1 || month > 12) {
        cout << "The month entered is invalid, please try again." << endl << "Enter a month (1-12): ";
        cin >> month;
    }
    
    cout << "Enter a year: ";
    cin >> year;

    if (month == 2 && year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
        days = 29;
    }
    else if (month == 2) {
        days = 28;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else {
        days = 30;
    }

    cout << days << " days";
}
