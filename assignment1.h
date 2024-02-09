// Jack Turner
// Assignment 1
// February 6 2024

#include <iostream>
#include <array>
#include <fstream>
#include <string>

using namespace std;

void readData(const int size1, int readfile[]);
// Takes in integer for the size of the array so that it can be iterated through, and an array to be filled by the text file

void check(int input1, const int size1, int readfile[]);
// Takes in user input, size of the array, and the text file to see if the user inputted value is found in the array

void change(int index1, int newnumber1, const int size1, int readfile[]);
// Takes in user input for index, new number, size of the array, and the text file, and uses the index position and new number to change a value in the array

void size(int newnumber, int size1, int readfile[]);
// Takes in new number, the size of the array, and the text file to increase the size of the array with a new number

void makezero(int index1, int size, int readfile[]);
// Takes in user input for index, the size, and the text file to make the value at the index position zero