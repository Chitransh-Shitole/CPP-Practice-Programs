#include <iostream>
using namespace std;

int main()
{
    int a, i, j, k ; //VARIABLES

    cout << "Pattern Problem #5" << endl << endl ;
    cout << "This program prints a hollow square of user's given size : " ;
    cin >> a ; //INPUT SIZE 
    cout << endl ;

    for ( i = 1 ; i <= a ; i++ ) //LOOP 1
    {
        if ( i == 1 || i == a ) //CONDITIONAL STATEMENT ( TOP & BOTTOM )
        {
            for ( j = 1 ; j <= a ; j++ )
            {
                cout << "X " ; //TOP AND BOTTOM
            }
            cout << endl ;
        }
        else //CONDITIONAL STATEMENT ( LEFT & RIGHT )
        {
            cout << "X " ; //LEFT
            for ( k = 1 ; k <= (a-2) ; k++ )
            {
                cout << "  " ; //PRINTS THE HOLLOW PART
            }
            cout << "X " << endl ; //RIGHT
        }
    }
    cout << endl ;
}