#include <iostream>
#include <numeric>
using namespace std ;

int main()
{
    int a, b ;
    int great_cd ;

    cout << "This program takes two integers and prints there GCD (Greatest common divisor)" << endl ;
    
    cout << "Enter 1st number : " ;
    cin >> a ;
    cout << "Enter 2nd number : " ;
    cin >> b ;

    great_cd = gcd(a, b) ;

    cout << a << ", " << b << " GCD : " << great_cd ;
    return 0 ;
}