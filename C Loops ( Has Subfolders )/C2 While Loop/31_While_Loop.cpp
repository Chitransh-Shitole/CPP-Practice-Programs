#include <iostream>
using namespace std;

int main ()
{
    int n = 1 ; // VARIABLE 

    //WHILE LOOP DECLARATION
    while ( n <= 10 )
    {
        cout << n << endl ; //PRINTING N
        n++ ;
    }
    return 0;
}
/*
I DISCOVERED THAT IF THE VALUE OF VARIABLE IS NOT DECLARED, THE WHILE LOOP WON'T RUN.
IN MY CASE, IT WAS PRINTING NOTHING UNTIL I SET THE VALUE ( n = 1 )
IF RUNNING THE LOOP IS NEEDED, WE CAN SET THE VALUE TO ZERO.
*/