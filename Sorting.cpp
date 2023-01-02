//
// Created by hesseljw on 30.12.22.
//

#include <vector>
#include <iostream>

void PrintVector(std::vector<double>& printedvect)
{
    for (const double& vect : printedvect)
    {
        std::cout << vect << std::endl;
    }
    std::cout << "There are " << printedvect.size() << " elements." << std::endl;

}



//InsertionSort is on O(n^2)
void InsertionSort(std::vector<double>& problem_array, std::vector<double>& sorted_array)
{
    int n = problem_array.size();
    sorted_array.at(0) = problem_array.at(0);

    int j;
    double temp;

    for (int i = 1; i < n; i++)
    {
        temp = problem_array.at(i);
        j = i - 1;

        while (j >= 0 && sorted_array.at(j) > temp)
        {
            sorted_array.at(j + 1) = sorted_array.at(j);
            j--;
        }
        sorted_array.at(j + 1) = temp;
    }

}


void Merge(std::vector<double>& problem_array, std::vector<double>& sorted_array){
    int nL, nR, q, i, j, k;
    int n = problem_array.size();

    q = (n/2) - 1;

    nL = q + 1; //Length of left array
    nR = n - q - 1; //Length of right Array

    std::vector<double> L(nL, 0);
    std::vector<double> R(nR, 0);

    //Left Array to array L
    i=0;
    for(double& iter : L){
        iter = problem_array[i];
        i++;
    }

    //Left Array to array R
    i=q+1;
    for(double& iter : R){
        iter = problem_array[i];
        i++;
    }

    i = 0;
    j = 0;
    k = 0;

    while (i<nL && j <nR){
        if(L[i]<= R[j]){
            sorted_array.at(k) = L[i];
            i++;
        }
        else {
            sorted_array.at(k) = R[j];
            j++;
        }
        k++;
    }

    while (i<nL){
        sorted_array.at(k) = L[i];
        i++;
        k++;
    }

    while (j<nR){
        sorted_array.at(k) = R[j];
        j++;
        k++;
    }



    PrintVector(sorted_array);


//    std::cout << L.size() << " is the size of Left" << std::endl;
//    std::cout << R.size() << " is the size of Right" << std::endl;







}


