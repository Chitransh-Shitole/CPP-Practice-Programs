#include <iostream>
using namespace std ;

int main()
{
    int i, j ; //LOOP VARIABLE
    int size ; 

    cout << "Pattern Problem #1 ---" << endl << endl ;
    cout << "Enter the size of square : " ;
    cin >> size ;

    for ( i = 1 ; i <= size ; i++ ) //LOOP 1
    {
        cout << endl ;  
        for ( j = 1; j <= size ; j++ ) //LOOP 2 ( NESTED )
        {
            cout << "X " ; //USING (X) AS SYMBOL
        }
    }
    cout << "\n" << endl ;
    return 0 ;
}