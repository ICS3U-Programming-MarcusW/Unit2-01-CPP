// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Sep. 21, 2022
// This program calculates and displays the area
// perimeter of a circle with radius 15 mm.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle that has a radius\n";
    std::cout << "of 15mm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(15, 2) << " cm^2\n";
    std::cout << "Perimeter = " << 2 * M_PI * 15 << " cm\n";
}
