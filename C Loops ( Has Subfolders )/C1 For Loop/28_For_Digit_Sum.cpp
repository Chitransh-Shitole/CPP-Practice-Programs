#include <iostream>
using namespace std;

int main()
{
    cout << "This Program Prints the Sum of the Digits of any number" << endl ;
    
    int num, i ; //NUMBER, REMAINDER, LOOP VARIABLE
    int sum = 0 ;
    cout << "Enter Your Number : " ;
    cin >> num ;

    for ( i = 1 ; i <= num ; i++ )
    {
        num = num % 10 ;
        sum = sum + num ;
    } 
    cout << "Sum of Digits : " << sum << endl ;
    return 0 ;
}