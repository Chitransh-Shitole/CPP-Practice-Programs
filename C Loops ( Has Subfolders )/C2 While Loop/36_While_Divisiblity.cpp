#include <iostream>
using namespace std;

int main ()
{
    int target ;
    int i = 1 ; //DECIDES STARTING POINT OF LOOP 

    cout << "This program takes a target number and prints all the divisible numbers between 1 to 100" << endl ;
   
    cout << "Enter your target : " ;
    cin >> target ;

    cout << "The numbers divisible by " << target << " are : " << endl ; //PRE LOOP NOTATION

    //WHILE LOOP
    while ( i <= 100 )
    {
        if ( i % target == 0 ) //CONDITIONAL STATEMENT 
        {
            cout << i << "\t" ;
        }
        i++ ;
    } 
    return 0 ;
}