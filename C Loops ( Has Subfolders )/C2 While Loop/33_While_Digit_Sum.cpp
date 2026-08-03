#include <iostream>
using namespace std;

int main ()
{
    int n, rem, sum = 0 ; //VARIABLES

    cout << "This program prints the sum of digits using While Loop" << endl ;
    cout << "Enter Your Number : " ;
    cin >> n ; // USER INPUT

    // CONDITIONAL LOGIC
    if ( n == 0 )
    {
        sum = 0 ;
        cout << "The Number is Zoro" << endl ;
    }
    else 
    {
        while ( n != 0 ) //LOOP LOGIC
        {
            //LOOP BODY
            rem = n%10 ; 
            n = n/10 ;
            sum = sum + rem ;
        }
        cout << "Sum = " << sum << endl ; //PRINTS RESULT
    }
    return 0 ;
}