#include <iostream>
using namespace std;

int main ()
{
    float celsius, farhenheit;

    cout << "This Program converts Temperature Medium from C to F and vice versa" << endl ;
    
    //CELCIUS TO FARHENHEIT
    cout << "For C to F ____________" << endl ;
    cout << "Enter Celsius : " ;
    cin >> celsius ;
    
    //CALCULATION FOR FINDING FARHENHEIT 
    farhenheit = (celsius *(9.0/5.0)) + 32 ; //FLOATING POINT ARE USED TO AVOID MISCOMPUTATIONS AS ( INT 9/5 GOES ZERO )

    //PRINTING FARHENHEIT
    cout << "Farhenheit Conversion : " << farhenheit << endl ;

    //FARHENHEIT TO CELSIUS
    cout << "For F to C ____________" << endl ;
    cout << "Enter Farhenheit : " ;
    cin >> farhenheit ;

    //CALCULATION FOR FINDING CELSIUS
    celsius = (farhenheit-32)*(5.0/9.0) ;

    //PRINTING CELSIUS
    cout << "Celsius Conversion : " << celsius << endl ;

    return 0 ;
}