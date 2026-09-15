#include <iostream>
using namespace std;

void print_even(int x) //FUNCTION TO PRINT EVENS
{
    cout << "Even : " ;
    for ( int i = 1 ; i <= x ; i++ )
    {
        if ( i%2 == 0 ) //CONDITIONAL STATEMENT - EVEN
        {
            cout << i << " " ; 
        }
    }
}
void print_odd(int y) //FUNCTIONS TO PRINT ODDS
{
    cout << "Odds : " ;
    for ( int j = 1 ; j <= y ; j++ )
    {
        if ( j%2 != 0 ) //CONDITIONAL STATEMENT - ODD
        {
            cout << j << " " ; 
        }
    }
}

int main() //MAIN FUNCTION
{
    int term ;

    cout << "This program prints all evens and odds upto a given TERM using Functions" << endl ;
    cout << "Enter the number : " ;
    cin >> term ; //INPUT 

    print_even(term) ; //EVEN FUNCTION - TAKES 'term' AS 'x' DEFINED IN ARGUEMENT.
    cout << endl << endl ;
    print_odd(term) ; //ODD FUNCTION - TAKES 'term' AS 'y' DEFINED IN ARGUEMENT.

    return 0 ;
}