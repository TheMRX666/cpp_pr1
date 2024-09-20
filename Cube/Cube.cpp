#include "Cube.h"

//Constructor implementation, initializes the cube's edge with the provided value
Cube::Cube(double edgeLength) : edge(edgeLength) {}

//Method to calculate the volume of the cube
double Cube::calculateVolume() {
    return edge * edge * edge;
}

//Method to calculate the lateral surface area of the cube
double Cube::calculateArea() {
    return 4 * edge * edge;
}
