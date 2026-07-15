#include <iostream>
using namespace std ;

int main ()
{
    int divisor, dividend ;
    
    cout << "This program takes divisor and divided and tells about complete divisibility" << endl ;

    cout << "Enter Dividend : ";
    cin >> dividend ;
    cout << "Enter Divisor : " ;
    cin >> divisor ;

    //CONDITIONAL LOGIC
    if ( dividend % divisor == 0 )
    {
        cout << dividend << " Is completely divisible by " << divisor << endl ;
    }
    else 
    {
        cout << dividend << " Is not Completely divisible by " << divisor << " ( Remainder may remain )" << endl ;
    }
    return 0 ;
}
