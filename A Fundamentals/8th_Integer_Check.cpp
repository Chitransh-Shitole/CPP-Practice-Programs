#include <iostream>
using namespace std;

int main ()
{
    int a ; //CAN ALSO BE FLOATING POINT NUMBER

    cout << "This Program checks if a number is a (+ve), (-ve) or zero" << endl ;
    cout << "Enter Your Number : " ;
    cin >> a ; 

    //CONDITIONAL LOGIC
    if ( a > 0 )
    {
        cout << a << " is a Positive Number" ;
    }
    else if ( a < 0 )
    {
        cout << a << " is a Negative Number" ;
    }
    else 
    {
        cout << "The Number is Zero" ;
    }
    return 0 ;
}