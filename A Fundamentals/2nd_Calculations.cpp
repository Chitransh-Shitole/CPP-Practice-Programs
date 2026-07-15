#include <iostream>
using namespace std;

int main()
{
    //Variable declarations
    int a, b;
    cout << "\nEnter First No. : " ;
    cin >> a ;
    cout << "Enter Second No. : " ;
    cin >> b ;

    //Calculation
    cout << a << " + " << b << " = " << a+b << endl ;
    cout << a << " - " << b << " = " << a-b << endl ;
    cout << a << " * " << b << " = " << a*b << endl ;
    cout << a << " / " << b << " = " << a/b << endl ;
    cout << a << " % " << b << " = " << a%b << endl ;

    return 0;
}