/*
 *
 * Based on:
 * Introduction to Algorithms
 * Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein
 *
 * Last updated 03.01.2023
 */

#include <iostream>
#include <vector>
#include "Sorting.h"



int main() {



    std::vector<double> vector1 = {3, 4, 1, 2, 3, 5,9 ,1 ,3 , 4, 8};

    PrintVector(vector1);

    MergeSort(vector1);
//    InsertionSort(vector1);

    PrintVector(vector1);


    std::cin.get();
    return 0;
}

