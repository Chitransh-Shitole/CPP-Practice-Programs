#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    float num ; 
    int r_fig ; //ROUND_FIGURE VARIABLE
    
    cout << "This program uses <cmath> round() function to round of a Decimal number" << endl ;
    cout << "Enter your Decimal number : " ;
    cin >> num ; //INPUT 

    r_fig = round(num) ; //ROUND FUNCTION

    cout << "Round off : " << r_fig << endl ; //OUTPUT
    return 0 ; 
}
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
HEREBY,
ROUND FUNCTION ROUNDS UP THE NUMBER ACCORDINGLY ON ITS OWN
MEANWHILE THERE ARE 2 MORE FUNCTIONS FOR SIMILAR CASES.

floor(x) - ROUNDS DOWN ONLY - 3.79 WILL BECOME 3, NOT 4
ceil (x) - ROUNDS UP ONLY - 4.28 WILL BECOME 5, NOT 4
*/