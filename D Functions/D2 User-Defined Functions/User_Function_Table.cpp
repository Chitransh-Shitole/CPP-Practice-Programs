#include <iostream>
using namespace std ;

void table_display(int x) //USER DEFINED FUNCTION + ARGUEMENT
{
    for ( int i = 1 ; i <= 10 ; i++ )

    cout << x << " * " << i << " = " << x*i << endl ;
}

int main() //MAIN FUNCTION 
{
    int number ;

    cout << "This program prints multiplication table using User defined function" << endl ;
    cout << "Enter your number : " ;
    cin >> number ; //INPUT 

    table_display(number) ; //FUNCTION CALL
    return 0 ;
}