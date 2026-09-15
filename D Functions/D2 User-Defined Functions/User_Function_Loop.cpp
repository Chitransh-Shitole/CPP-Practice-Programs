#include <iostream>
using namespace std;

void loop() //USER DEFINED FUNCTION
{
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        cout << i << endl ;
    }
}

int main() //MAIN FUNCTION
{
    cout << "This program prints 1-10 using user defined function" << endl ;
    loop() ; //FUNCTION CALL

    return 0 ;
}