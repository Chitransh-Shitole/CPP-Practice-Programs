#include <iostream>
using namespace std;

int main()
{
    int a, b, temp ;

    cout << "This Program swaps two number using a temp and without temp variable" << endl;
    cout << "USING TEMP __________" << endl ;
    cout << "Enter 1st Number : " ;
    cin >> a ;
    cout << "Enter 2nd Number : " ;
    cin >> b ;

    cout << "Before Swapping : \t\ta = " << a << ", b = " << b << endl ;
    //SWAPPING LOGIC WITH TEMP ( 3RD VARIABLE )
    temp = a ;  
    a = b ;     
    b = temp ;  

    //PRINTING THEM
    cout << "After Swapping with TEMP : \ta = " << a << ", b = " << b << endl ;

    //NEW VARIABLES FOR NON TEMP
    int c, d ;
    cout << "WITHOUT TEMP __________" << endl;
    cout << "Enter 1st Number : " ;
    cin >> c ;
    cout << "Enter 2nd Number : " ;
    cin >> d ;

    cout << "Before Swapping : \t\tc = " << c << ", d = " << d << endl ;

    //SWAPPING LOGIC WITHOUT TEMP
    c = c + d ;
    d = c - d ;
    c = c - d ;

    //PRINTING THEM
    cout << "After Swapping without TEMP : \tc = " << c << ", d = " << d << endl ;

    return 0;

}