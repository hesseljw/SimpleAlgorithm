#include <iostream>
#include <vector>
#include "Sorting.h"


void PrintVector(std::vector<double>& printedvect)
{
    for (const double& vect : printedvect)
    {
        std::cout << vect << std::endl;
    }
    std::cout << "There are " << printedvect.size() << " elements." << std::endl;

}

int main() {


    std::vector<double> vector1 = {2, 5 ,1 ,3 , 4, 2, 1};

    int size_of_vector = vector1.size();
    std::vector<double> vector2(size_of_vector, 0);

    InsertionSort(vector1, vector2);
    PrintVector(vector2);

    std::cin.get();
    return 0;
}

