/*Write a program to find the volume of cube, cylinder and rectangular box by
suing the concept of function of overloading.*/
#include <iostream>
#include <cmath>

// Function to calculate the volume of a cube
double calculate_volume(double side_length) {
    return pow(side_length, 3);
}

// Function to calculate the volume of a cylinder
double calculate_volume(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

// Function to calculate the volume of a rectangular box
double calculate_volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double cube_volume = calculate_volume(3);
    std::cout << "Volume of cube: " << cube_volume << std::endl;

    double cylinder_volume = calculate_volume(2, 4);
    std::cout << "Volume of cylinder: " << cylinder_volume << std::endl;

    double box_volume = calculate_volume(2, 3, 4);
    std::cout << "Volume of rectangular box: " << box_volume << std::endl;

    return 0;
}


