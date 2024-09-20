#include <iostream>
#include "Cube/Cube.h"

int main() {
    //Declare a variable to store the edge length of the cube
    double edge;

    //Prompt the user to enter the length of the cube's edge
    std::cout << "Please enter an edge value:  ";
    std::cin >> edge;

    Cube cube(edge);

    double volume = cube.calculateVolume();
    double area = cube.calculateArea();

    std::cout << std::endl;
    std::cout << "Volume: "<< volume << std::endl;
    std::cout << "Area: "<< area << std::endl;

    return 0;
}
