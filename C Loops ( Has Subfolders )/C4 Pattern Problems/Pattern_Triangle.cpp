#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    int size;

    cout << "Pattern Problem #2 --- " << endl << endl ;
    cout << "Enter the size of Triangle : " ;
    cin >> size ;

    for ( i = 1 ; i <= size ; i++ )
    {
        cout << endl ;
        for ( j = 1 ; j <= i ; j++ )
        {
            cout << "X " ;
        }
    }
    cout << endl << endl ;
    return 0 ;
}