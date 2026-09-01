#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, absolute_value ; //VARIABLE DECLARATIONS
    
    cout << "This Program takes a number input and prints it's Absolute Value" << endl ;
    cout << "Enter Your Number : " ;
    cin >> num ; //INPUT 

    absolute_value = abs(num) ; //ABSOLUTE VALUE FUNCTION

    cout << "Absolute value : " << absolute_value ; //OUTPUT
    return 0 ;
}
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ABSOLUTE VALUE FUNCTION
abs(x) - GIVES THE ABSOLUTE VALUE OF x
ABSOLUTE VALUE -> |x| = x
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/