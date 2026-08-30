#include <iostream>
using namespace std;

int main()
{
    int a, i, j ; //VARIABLES
    int count = 1 ; //COUNTER VARIABLE FOR NUMBERS

    cout << "Pattern Problem #6" << endl ;
    cout << "This Program prints Floyd's triangle" << endl << endl ;

    cout << "Enter size of Triangle : " ; 
    cin >> a ; //INPUT

    for ( i = 1 ; i <= a ; i++ ) //LOOP 1
    {
        cout << endl ;
        for ( j = 1 ; j <= i ; j++ ) //LOOP 2
        {
            //CONDITIONAL STATEMENTS ( FORMATTING ONLY )
            if ( count <= 9 )
            {
                cout << count << "   " ;
                count++ ;
            }
            else if ( count <= 99 )
            {
                cout << count << "  " ;
                count++ ;
            }
            else 
            {
                cout << count << " " ;
                count++ ;
            }
        }
    }
}

/*
THE IF-ELSE CHAIN IS ALMOST USELESS
IT ONLY HELPS IN FORMATTING FOR BIGGER TRIANGLES ( a >= 14 ) FOR CLEANER TERMINAL OUTPUT

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
for ( xx ; yy ; zz )
{
    cout << count << "  " ;
    count++ ;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

THE ABOVE STATEMENT CAN BE USED FOR SIMPLICITY ( INNER LOOP )
*/