#include <iostream>
using namespace std;

int main()
{
    int a, i, j, k ;
    
    cout << "Pattern Problem #7" << endl ;
    cout << "This Program prints a Hollow Triangle" << endl << endl ;
    
    cout << "Enter the size of Triangle : " ;
    cin >> a ;

    for ( i = 1 ; i <= a ; i++ )
    {
        cout << endl ;

        if ( i <= 2 || i == a )
        {
            for ( j = 1 ; j <= i ; j++ )
            {
                cout << "X " ;
            }
        }
        else 
        {
            cout << "X " ;
            for ( k = 1 ; k <= (i-2) ; k++ )
            {
                cout << "  " ;
            }
            cout << "X " ;
        }
    }
    cout << endl ;
}