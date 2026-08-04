#include <iostream>
using namespace std ;

int main ()
{
    int num, fact = 1 ; //FACT = 1 BECAUSE 0*a WILL ALWAYS REMAIN ZERO
    
    cout << "This program computes the factorial of a given number using While Loop" << endl ;
    cout << "Enter Your Number : " ;
    cin >> num ;

    cout << "Factorial :\t" << num ; //PRE-LOOP OUTPUT
    //WHILE LOOP
    while ( num >= 1 ) 
    {
        fact = fact*num ; //LOOP LOGIC
        num-- ;
    } 
    cout << "! = " << fact << endl ; //POST-LOOP OUTPUT
    return 0 ;
}
/*
THE CODE BODY MIGHT LOOK TWISTED, SO HERE IS AN EXPLANATION
PRE-LOOP <-- NEEDS TO BE PRINTED BEFORE LOOP OTHERWISE THE VALUE OF NUM BECOMES ZERO.
POST-LOOP <-- COMPLETES THE REMAINING OUTPUT FOR THE ANSWER
*/