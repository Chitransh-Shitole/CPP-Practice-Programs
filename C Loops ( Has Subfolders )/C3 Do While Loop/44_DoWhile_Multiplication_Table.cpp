#include <iostream>
using namespace std;

int main()
{
    int num, i = 1 ; //VARIABLE DECLARATION

    cout << "This program prints multiplication table of a number using Do-While Loop" << endl ;
    cout << "Enter Your Number : " ;
    cin >> num ;

    do //DO-WHILE LOOP IMPLEMENTATION
    {
        cout << num << " * " << i << " = " << num*i << endl ;
        i++ ;
    } while ( i != 11 ); //LOOP CONDITION
}