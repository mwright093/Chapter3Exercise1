// Chapter3Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Please Enter the Number of Gallons Your Car Can Hold: ";
    
    float num_gallons = 0;
    std::cin >> num_gallons;

    std::cout << "\nPlease Enter the Number of Miles Your Car Can Drive on a Full Tank: ";

    float num_miles = 0;
    std::cin >> num_miles;

    float miles_per_gallon = num_miles / num_gallons;

    std::cout << "\nYour car can get up to " << miles_per_gallon << " miles per gallon! \n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
