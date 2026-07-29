#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0 ; //VARIABLE DECLARATION
    cout << "This Program prints the sum of First natural numbers upto a given number" << endl;

    //NUMBER INPUT
    cout << "Enter Your Number : " ;
    cin >> n ;

    //FOR LOOP
    for ( i = 1 ; i <= n ; i++ )
    {
        cout << i << "\t" ;
        sum = sum + i ;     //LOOP SUM LOGIC
    }
    //PRINTING THE FINAL SUM
    cout << "\nSum = \t" << sum << endl ; 
    return 0 ;
}