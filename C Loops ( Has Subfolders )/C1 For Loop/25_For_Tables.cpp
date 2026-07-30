#include <iostream>
using namespace std;

int main()
//THIS PROGRAM PRINTS MULTIPLICATION TABLE USING FOR LOOP
{
    int a, i ;
    cout << "Program to print multiplication table using *FOR LOOP*" << endl;
    cout << "enter Your Number : " ;
    cin >> a ;

    //LOOP IMPLEMENTATION 
    for ( i = 1 ; i <= 10 ; i++ )
    {
        cout << a << " * " << i << "\t = " << a*i << endl ; //LOGIC
    }
    return 0 ;
}