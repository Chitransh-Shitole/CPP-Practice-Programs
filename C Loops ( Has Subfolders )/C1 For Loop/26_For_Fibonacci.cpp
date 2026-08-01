#include <iostream>
using namespace std;

//THIS PROGRAM PRINTS FIBONACCI SERIES UPTO GIVEN TERMS USING FOR LOOP
int main ()
{
    int n, a = 0, b = 1, i, sum = 0 ;

    cout << "This Program prints Fibonacci series using For Loop" << endl ;
    cout << "Enter the Number ( Series limit ) : " ;
    cin >> n ;

    //LOOP IMPLEMENTATION
    for ( i = 0 ; i < n ; i++ )
    {
        //COUT FIRST BECAUSE SEQUENCE STARTS FROM 0 ( SUM = 0 )
        cout << a << "\t" ;

        //FIBONACCI SERIES LOGIC
        sum = a + b ; 
        a = b ;
        b = sum ;
    }
    return 0 ; 
}