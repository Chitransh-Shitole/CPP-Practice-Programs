#include <iostream>
using namespace std;

int main()
{
    int a, i, count = 0 ;
    cout << "This Program checks if the number is a prime number" << endl;
    cout << "Enter a number : " ;
    cin >> a ;

    for ( i = 2 ; i <= a ; i++ )
    {
        if ( a%i == 0 )
        {
            count++ ;
        }
    }
    if ( count == 1 )
    {
        cout << a << " is a prime number" << endl ;
    }
    else 
    {
        cout << a << " is not a prime number" << endl ;
    }
    return 0 ;
}
    