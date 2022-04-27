// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is to calculate a bonus on a yearly salary

#include <iostream>
#include <string>

int main() {
    // this function is to calculate a 5% bonus on a yearly salary
    std::string salaryString;
    std::string yearsOfServiceString;
    int salaryInt;
    int yearsOfServiceInt;

    // input
    std::cout << "Enter your yearly salary: ";
    std::cin >> salaryString;
    std::cout << "Enter your years of service: ";
    std::cin >> yearsOfServiceString;
    std::cout << "" << std::endl;

    // process & output
    try {
        salaryInt = std::stoi(salaryString);
        yearsOfServiceInt = std::stoi(yearsOfServiceString);
        if (yearsOfServiceInt > 5) {
            salaryInt = salaryInt * 1.05;
            std::cout << "The net worth amount is " << salaryInt <<
            "." << std::endl;
        } else {
            std::cout << "The net worth amount is " << salaryInt <<
            "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
