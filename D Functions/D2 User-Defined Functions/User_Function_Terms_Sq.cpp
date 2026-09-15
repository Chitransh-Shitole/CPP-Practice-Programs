#include <iostream>
#include <cmath>
using namespace std ;

void square(int x) //SQUARE FUNCTION
{
    cout << "Squares --- " << endl ;
    for ( int i = 1 ; i <= x ; i++ ) //LOOP
    {
        cout << i << " - " << pow( i,2 ) << endl ; //PRINTS SQUARE USING 'pow()' FUNCTION
    }
}

int main() //MAIN
{
    int terms ;

    cout << "This program prints the Squares of first numbers upto given terms using Functions" << endl ;
    cout << "Enter number of terms : " ;
    cin >> terms ; //INPUT 

    square(terms) ; //FUNCTION CALL
    return 0 ;
}