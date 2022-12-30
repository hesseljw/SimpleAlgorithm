#include <iostream>
#include <vector>

void InsertionSort(std::vector<double>& problem_array, std::vector<double>& sorted_array);
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
    std::vector<double> vector2 = {0, 0 ,0 ,0 , 0, 0, 0};

    InsertionSort(vector1, vector2);
    PrintVector(vector2);

    std::cin.get();
    return 0;
}

