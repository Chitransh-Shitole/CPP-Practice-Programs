#include <iostream>
#include <numeric>
using namespace std ;

int main()
{
    int a, b ; 
    int great_cd ; //GCD VARIABLE

    cout << "This program takes two integers and prints there GCD (Greatest common divisor)" << endl ;
    
    cout << "Enter 1st number : " ;
    cin >> a ; //INPUT 1
    cout << "Enter 2nd number : " ;
    cin >> b ; //INPUT 2

    great_cd = gcd(a, b) ; //GCD FUNCTION

    cout << a << ", " << b << " GCD : " << great_cd ; //OUTPUT
    return 0 ;
}