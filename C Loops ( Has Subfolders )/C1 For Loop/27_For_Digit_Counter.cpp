#include <iostream>
using namespace std;

int main ()
{
    int n, i, count = 0 ; //VARIABLE DECLARATION ALONG WITH COUNT
    
    cout << "This Program takes a number and counts the number of digits " << endl ;
    cout << "Enter your Number : ";
    cin >> n ;

    cout << "Number Entered : " << n << endl ; // SHOWS THE INITIAL NUMBER

    //LOOP & LOGIC
    for ( i = 1 ; i <= n ; i++ )
    {
        if ( n <= 9 )
        {
            count++ ;
            break ; 
        }
        else 
        {
            n = n/10 ;
            count++ ;
        }
    }
    cout << "Number of Digits : " << count << endl ; //OUTPUT
    return 0 ;
} 