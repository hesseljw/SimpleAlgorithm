/*
 *
 * Based on:
 * Introduction to Algorithms
 * Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein
 */

#include <iostream>
#include <vector>
#include "Sorting.h"



int main() {

    int size_of_vector;
//    std::vector<double> vector1 = {1, 2, 3, 5 ,1 ,3 , 4, 8};
//
//    size_of_vector = vector1.size();
//    std::vector<double> vector2(size_of_vector, 0);
//
//    InsertionSort(vector1, vector2);
//    PrintVector(vector2);

    std::vector<double> vector3 = {1, 2, 3, 5,9 ,1 ,3 , 4, 8};
    size_of_vector = vector3.size();
    std::vector<double> vector4(size_of_vector, 0);

    PrintVector(vector3);

    Merge(vector3,vector4);
    PrintVector(vector4);



    std::cin.get();
    return 0;
}

