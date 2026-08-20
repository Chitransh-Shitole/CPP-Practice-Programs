#include <iostream>
using namespace std;

int main()
{
    int i, j ;
    int height ;

    cout << "Pattern Problem #4" << endl << endl ;
    cout << "Enter Height of Pyramid : " ;
    cin >> height ;

    cout << endl ;
    for ( i = 0 ; i <= height ; i++ )
    {
        cout << endl ;
        for ( j = height ; j >= 1 ; j-- )
        {
            if ( i <= j )
            {
                cout << " " ;
            }
            else 
            {
                cout << " X" ;
            }
        }
    }
    cout << endl << endl ;
    return 0;
}