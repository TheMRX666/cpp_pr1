//
// Created by shain on 20.09.2024.
//

#ifndef CUBE_H
#define CUBE_H

//Definition of the Cube class, which represents a geometric cube
class Cube {

private:
    //Variable to store the length of the cube's edge
    double edge;

public:
    //Constructor that initializes the cube's edge with the given value
    Cube(double edgeLength);

    //Method to calculate and return the volume of the cube
    double calculateVolume();
    //Method to calculate and return the lateral surface area of the cube
    double calculateArea();
};

#endif