#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(std::string color, double r) 
    : Shape(color), radius(r) {
    std::cout << "Creating circle with radius " << radius << std::endl;
}

Circle::~Circle() {
    std::cout << "Destroying circle with radius " << radius << std::endl;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

void Circle::draw() const {
    std::cout << "Drawing " << getColor() << " circle with radius " << radius << std::endl;
    
    // Simple ASCII art circle
    int size = static_cast<int>(radius * 2);
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size; j++) {
            double distance = std::sqrt(std::pow(i - radius, 2) + std::pow(j - radius, 2));
            std::cout << (distance <= radius ? "*" : " ");
        }
        std::cout << std::endl;
    }
}

void Circle::displayInfo() const {
    Shape::displayInfo();
    std::cout << "Radius: " << radius << std::endl;
}
