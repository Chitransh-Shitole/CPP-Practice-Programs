#include <iostream>
using namespace std;

int main()
{
    int i, j ;
    int size ;

    cout << "Pattern Problem #3 --- " << endl << endl ;
    cout << "Enter size of Inverted Triangle : " ;
    cin >> size ;

    for ( i = size ; i >= 1 ; i-- )
    {
        cout << endl ;
        for ( j = i ; j >= 1 ; j-- )
        {
            cout << "X " ;
        }
    }
    cout << endl << endl ;
    return 0 ;
}