#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a ; 

    cout << "This program prints the square of a given number using Math - sqrt()" << endl;
    cout << "Enter your number : " ;
    cin >> a ;

    int sq = pow(a,2);

    cout << "\nSquare of " << a << " = " << sq ;

    return 0 ;
}