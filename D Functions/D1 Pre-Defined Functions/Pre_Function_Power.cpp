#include <iostream>
#include <cmath> //MATH LIBRARY USED FOR MATH RELATION FUNCTIONS
using namespace std;

int main()
{
    int a ; //VARIABLE DECLARATION

    cout << "This program prints the square of a given number using - pow()" << endl;
    cout << "Enter your number : " ;
    cin >> a ; //INPUT

    int sq = pow(a,2); //POWER FUNCTION 

    cout << "\nSquare of " << a << " = " << sq ;
    return 0 ;
}
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
STRUCTURE OF THE POWER FUNCTION - pow(x,y);
WHERE : x = number, y = power
HERE (y) CAN BE CHANGED ACCORDINGLY TO 3,4,5...
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/