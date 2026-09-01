#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a ;
    double root ; //ROOT CAN BE DECIMALS

    cout << "This program takes a number and Prints the Square Root" << endl ;
    cout << "Enter your number : " ;
    cin >> a ; //INPUT

    root = sqrt(a) ; //SQRT FUNCTION

    cout << "Square Root of " << a << " = " << root << endl ; //OUTPUT
    return 0 ;
}