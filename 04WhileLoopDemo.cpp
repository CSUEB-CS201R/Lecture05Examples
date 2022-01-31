/*
DEMO
Write a program which prompts the user for two whole numbers.
Then, the program outputs all whole numbers between the user’s two numbers, inclusive, in increasing order.
*/

#include <iostream>
using namespace std;

int main()
{
//declare variables for starting number and the ending number
    int startingNumber;
    int endingNumber;
//prompt user for variables

    cout << "Enter the starting number: ";
    cin>> startingNumber;
    cout << endl;  //newline

    cout << "Enter the ending number: ";
    cin >> endingNumber;

// define "current number" variable and set current number equal
//to the starting number

    int currentNumber = startingNumber;

//use a loop to output the values

    cout << "The numbers between "  << startingNumber << " and "
         << endingNumber << " are: \n";


    while (currentNumber <= endingNumber)
    {
        cout << currentNumber << endl;  //output current number on  new line
        currentNumber+=2;  //increment current number
    }

//end the program

    return 0;

}