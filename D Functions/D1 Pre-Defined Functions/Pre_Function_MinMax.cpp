#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int a, b  ; //VARIABLES
    int small ; //MIN VARIABLE
    int large ; //MAX VARIABLE

    cout << "This program uses <cmath> min & max function to find Largest and smallest Numbers" << endl << endl ;
    cout << "Enter Your Numbers ---" << endl ;
    cout << "Number a : " ;
    cin >> a ; //INPUT A 
    cout << "Number b : " ;
    cin >> b ; //INPUT B

    small = min(a, b) ; //MIN FUNCTION
    large = max(a, b) ; //MAX FUNCTION

    cout << "\nSmallest number : " << small << endl ; //OUTPUT 1 - MIN
    cout << "Largest  number : " << large << endl ; //OUTPUT 2 - MAX
    return 0 ;
}