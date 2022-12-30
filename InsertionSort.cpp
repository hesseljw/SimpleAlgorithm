//
// Created by hesseljw on 30.12.22.
//
#pragma once
#include <vector>
#include <iostream>

void InsertionSort(std::vector<double>& problem_array, std::vector<double>& sorted_array)
{
    int n = problem_array.size();
    sorted_array.at(0) = problem_array.at(0);

    int j;
    double temp;

    for (int i = 1; i<n; i++)
    {
        temp = problem_array.at(i);
        j = i-1;

        while (j>=0 && sorted_array.at(j) > temp  )
        {
            sorted_array.at(j+1) = sorted_array.at(j);
            j--;
        }
        sorted_array.at(j+1) = temp;
    }

}

