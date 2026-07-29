#include <iostream>
using namespace std;

int main ()
{
    int a ;

    cout << "This program tells you if a number is even or odd" << endl ;
    cout << "Enter a number : " ;
    cin >> a ;

    //CONDITIONAL LOGIC
    if ( a % 2 == 0 )
    { 
        cout << a << " is an even number" ;
    }
    else 
    {
        cout << a << " is an odd number " ;
    }
    
    return 0 ;
}