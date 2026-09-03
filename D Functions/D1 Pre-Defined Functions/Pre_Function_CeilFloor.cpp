#include <iostream>
#include <cmath>
using namespace std ;

int main ()
{
    //VARIABLE DECLARATION
    double num ;
    int CEIL, FLOOR ; 

    cout << "This program takes a number and prints it's Ceiling and Floor \nIt uses ceil() & floor() from <cmath>" << endl ;
    cout << "\nEnter your number " ;
    cin >> num ; 

    //FUNCTIONS
    CEIL = ceil(num) ;                 
    FLOOR = floor(num) ; 

    //OUTPUTS
    cout << "Ceiling : " << CEIL << endl  ; 
    cout << "Floor   : " << FLOOR << endl ; 

    return 0 ;
}