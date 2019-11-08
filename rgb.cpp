// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program prints all RGB numbers
#include <iostream>

int main() {
    // This function prints all RGB numbers
    int red = 0;
    int green = 0;
    int blue = 0;

    // Process
    for (red = 253; red <= 255;red++) {
        for (green = 253; green <= 255; green++) {
            for (blue = 250; blue <= 255; blue++) {
                // Output
                std::cout << "RGB(" << red << "," << green << "," << blue <<
                          ")" << std::endl;
            }
        }
    }
}
