#include <iostream>
using namespace std;

int main()
{
    //VARIABLE INITIALISATION
    int a = 0, b = 1, sum = 0 ; 
    int limit, i = 1 ;

    cout << "This program prints Fobonacci series upto given term using while loop" << endl ;
    cout << "Enter number of term : " ;
    cin >> limit ; //SET LIMIT

    cout << "Series : " ; //PRE-LOOP STATEMENT

    //WHILE LOOP
    while ( i <= limit )
    {
        cout << a << "\t" ;

        //SHIFTING LOGIC
        sum = a + b ;
        a = b ;
        b = sum ;

        i++ ; //INCREMENTATION
    }
    return 0;
}