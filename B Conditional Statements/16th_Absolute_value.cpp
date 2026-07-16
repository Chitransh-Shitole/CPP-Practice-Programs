#include <iostream> 
using namespace std;

int main()
{
    //DECLARATION
    int a, absolute_value ;

    //INPUT THE NUMBER
    cout << "This program takes a value and gives its absolute value ( Turns Positive )" << endl ;
    cout << "Give a Number : " ;
    cin >> a ;

    //CONDITIONAL LOGIC
    if ( a >= 0 )
    {
        cout << "Absolute Value : " << a ;
    }
    else 
    {
        absolute_value = a-a-a ; //NEGATIVE + NEGATIVE MAKES ZERO, ANOTHER NEGATIVE ADDS UP
        cout << "Absolute Value : " << absolute_value ;
    }
    return 0 ;
}