#include <iostream>
using namespace std;

//THIS PROGRAM USES LOOP TO PRINT ALL EVENS AND ODDS BELOW A SPECIFIC NUMBER ( 50 HERE )
int main()
{
    int i, j ; // LOOP VARIABLES

    cout << "This Program prints even and odds below 50 using *FOR LOOP*" << endl ;
    //LOOP FOR EVEN NUMBERS 
    cout << "The Even numbers below 50 ================ " << endl ;
    for ( i = 1 ; i <= 50 ; i++ )
    {
        if ( i % 2 == 0 )
        {
            cout << i << "\t" ;
        }
    }
    cout << endl ;
    //LOOP FOR ODD NUMBERS 
    cout << "The Odd numbers below 50 ================ " << endl ;
    for ( j = 1 ; j <= 50 ; j++ )
    {
        if ( j % 2 != 0 )
        {
            cout << j << "\t" ;
        }
    }
    return 0 ;
}