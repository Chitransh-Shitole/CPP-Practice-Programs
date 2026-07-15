#include <iostream>
using namespace std;

int main()
{
    int a, b, c ;
    cout << "This Program tells the largest and smallest of Three  Numbers" << endl;
    cout << "Enter 1st No : " ;
    cin >> a ;
    cout << "Enter 2nd No : " ;
    cin >> b ;
    cout << "Enter 3rd No : " ;
    cin >> c ;
 
    // IF THE NUMBERS ARE ALL ZEROES OF EQUAL    
    if ( a == b && a == c && a+b+c != 0 )
    {
        cout << "The Numbers are Equal" << endl ;
    }
    else if ( a == 0 && b == 0  && c == 0 )
    {
        cout << "The Numbers are all Zeroes" << endl ;
    }
    // IF a IS LARGEST
    else if ( a > b && b > c )
    {
        cout << a << " is the Largest No." << endl ;
        cout << c << " is the Smallest No." << endl ;
    }
    else if ( a > c && c > b )
    {
        cout << a << " is the Largest No." << endl ;
        cout << b << " is the Smallest No." << endl ;
    }
    // IF b IS LARGEST
    else if ( b > a && a > c )
    {
        cout << b << " is the Largest No." << endl ;
        cout << c << " is the Smallest No." << endl ;
    }
    else if ( b > c && c > a )
    {
        cout << b << " is the Largest No." << endl ;
        cout << a << " is the Smallest No." << endl ;
    }
    // IF c IS LARGEST
    else if ( c > a && a > b )
    {
        cout << c << " is the Largest No." << endl ;
        cout << b << " is the Smallest No." << endl ;
    }
    else if ( c > b && b > a )
    {
        cout << c << " is the Largest No." << endl ;
        cout << a << " is the Smallest No." << endl ;
    }
    return 0;
}