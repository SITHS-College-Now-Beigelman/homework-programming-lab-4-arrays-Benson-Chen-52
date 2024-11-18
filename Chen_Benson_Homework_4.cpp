// Benson Chen
// Homework 4
// 11/13/24

#include <iostream>
#include <string>
using namespace std;

// Exercise 1
void filterEvens(int myArray[], int size) //Takes in the array and size of the array
{
    cout << "Even numbers are: ";
    for(int i = 0; i < size; i++) //For loop to run through all the elements in the array
    {   
        if(myArray[i] % 2 == 0) //If any number is divisble by 2 
            cout << myArray[i] << " "; //prints that number
    }
    cout << endl; //starts a new line
}

int carsSold(int cars[], int SIZE) //Takes in the cars array and the size
{
    int total = 0; //New variable to hold the total number of cars
    for (int i = 0; i < SIZE; i++) //Goes through all the elements in the array
    {
        total += cars[i]; //Adds all the elements up
    }
    return total; //Returns that value
}
int mostcarsSold(int cars[], int SIZE) //Takes in the cars array and the size
{
    int mostcars = 0; //New variable to hold the component number for the greatest number of cars in the array
    for (int i = 1; i < SIZE; i++) //Runs through all the elements in the array
    {
        if (cars[i] > cars[mostcars]) //If an element is greater than the first element
            mostcars = i; //The element number gets stored
    }
    return mostcars; //Returns the element number with the highest value
}

string dna_to_rna(string dna) //a new function of string type that takes in the dna string
{
    string rna = ""; //new string that has no characters
    for (char base : dna) //Runs through each character in the DNA sequence
    {
        switch (base) //A switch to change the DNA sequence to its RNA equivalent
        {
            case 'A':
                rna += 'U';
                break;
            case 'C':
                rna += 'G';
                break;
            case 'G':
                rna += 'C';
                break;
            case 'T':
                rna += 'A';
                break;
            default:
                // Ignore any characters that are not valid DNA nucleotides
                break;
        }
    }
    return rna; //returns the RNA sequence
}

int main()
{
    const int size = 8; //Sets a constant size for the array
    int myArray[size]; //Creates an array with 8 elements

    for(int i = 0; i < size; i++) //a for loop to get all 8 user inputs
    {
        cout << "Enter value " << (i +1) << ": "; //prompts the user to input a number
        cin >> myArray[i]; //Stores that in the array
        cout << endl; //New line
    }   

    filterEvens(myArray, size); //Runs the filterEvens function by giving it the elements in the array and the size

    cout << endl; //New line
    const int SIZE = 10; //Constant array size of 10
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //The values for the elements in the array
    cout << "Total number of cars sold: " << carsSold(cars, SIZE) << endl; //Prints the total number of cars sold by using carsSold function
    
    int best = mostcarsSold(cars, SIZE); //gets the element number with the most number of cars sold by giving the array and size
    cout << "Salesperson #" << (best + 1) << " sold the most cars." << endl; //prints which salesperson sold the most cars
    // i + 1 is necessary since the array starts at 0
    cout << "They sold " << cars[best] << " cars." << endl; //Prints the value in the array matching the element number

    cout << endl; //New line
    string dnasequence_1 = "ACGTTGCA"; //The DNA sequences to be tested
    string dnasequence_2 = "ACG TGCA";
    string dnasequence_3 = "GATTACA";
    string dnasequence_4 = "A42%";
    string rnasequence_1 = dna_to_rna(dnasequence_1); //Uses the dna_to_rna function to change all the dna sequences to rna requences
    string rnasequence_2 = dna_to_rna(dnasequence_2);
    string rnasequence_3 = dna_to_rna(dnasequence_3);
    string rnasequence_4 = dna_to_rna(dnasequence_4);
    cout << "Test 1: The first DNA sequence to RNA sequence is - " << rnasequence_1 << endl; //prints the rna requences
    cout << "Test 2: The second DNA sequence to RNA sequence is - " << rnasequence_2 << endl;
    cout << "Test 3: The third DNA sequence to RNA sequence is - " << rnasequence_3 << endl;
    cout << "Test 4: The fourth DNA sequence to RNA sequence is - " << rnasequence_4 << endl;
    return 0;
}
/*
Enter value 1: 13

Enter value 2: 1241312

Enter value 3: 89

Enter value 4: 100

Enter value 5: 55

Enter value 6: 34

Enter value 7: 37

Enter value 8: 1

Even numbers are: 1241312 100 34

Total number of cars sold: 58
Salesperson #5 sold the most cars.
They sold 14 cars.

Test 1: The first DNA sequence to RNA sequence is - UGCAACGU
Test 2: The second DNA sequence to RNA sequence is - UGCACGU
Test 3: The third DNA sequence to RNA sequence is - CUAAUGU
Test 4: The fourth DNA sequence to RNA sequence is - U
*/