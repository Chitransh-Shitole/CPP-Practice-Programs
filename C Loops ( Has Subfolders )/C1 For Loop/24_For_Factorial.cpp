#include <iostream>
using namespace std;

//THIS PROGRAM USES FOR LOOP AND PRINTS FACTORIAL OF A GIVEN NUMBER
int main ()
{
    int a, i ;
    cout << "This Program takes input and Prints its factorial" << endl ;
    
    cout << "Enter Your Number : " ;
    cin >> a ;

    int fact = 1 ; //FACTORIAL DECLARATION ( INITIALIZED = 1 ; 0 WILL BREAK THE CODE )

    for ( i = a ; i >= 1 ; i-- )
    {
        cout << i << "\t" ;
        fact = fact * i ;   //FACTOIAL LOGIC
    }
    cout << "\nFactorial : \t" << a << "! = " << fact ;
    return 0 ;
}