#include <iostream>
using namespace std ;

int main ()
{
    int n, rem ; //VARIABLE DECLARATION

    cout << "This Program takes a number and reverse it using while loop" << endl ;
    cout << "Enter Your Number : " ;
    cin >> n ; 

    if ( n == 0 ) //CONDITION
    {
        cout << "Number Cannot be reversed ( is zero )" << endl ;
    }
    else
    { 
        while ( n != 0 ) //WHILE LOOP 
        {
            //REVERSAL LOGIC
            rem = n % 10 ;
            n = n / 10 ;
            cout << rem ;
        }
    } 
    return 0;
}
//WHILE LOOP DOES NOT REQUIRE A COMPULSORY ITERATIVE VARIABLE TO RUN
