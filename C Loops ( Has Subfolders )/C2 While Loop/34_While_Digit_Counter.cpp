#include <iostream>
using namespace std;

int main ()
{
    long n ;
    int count = 0 ; //VARIABLE DECLARATION ALONG WITH COUNT
    
    cout << "This Program takes a number and counts the number of digits " << endl ;
    cout << "Enter your Number : ";
    cin >> n ;

    cout << "Number Entered : " << n << endl ; // SHOWS THE INITIATED NUMBER

    //LOOP & LOGIC 
    if ( n == 0 )
    {
        count = 1 ;
    }
    else 
    {
        while ( n != 0 )
        {
            n = n/10 ; 
            count++ ;
        }
    }
    cout << "Number of digits : " << count << endl ; //DISPLAYS THE NUMBER OF DIGITS
    return 0 ;
}

/*
NOTE ---
THIS PROGRAM WAS BUILT USING FOR LOOP WHICH CAUSED THE ERROR, 
AS THE INPUT NUMBER WAS NOT FIXED, THE COMPILER COULD NOT PREDICT IT.
WHICH WAS GIVING UNCERTAINITY IN OUTPUTS BY 1 LESS.
THIS CODE HAS BEEN REBUILT IN WHILE LOOP AND PLACED IN A DEDICATED WHILE LOOP FOLDER. 
*/