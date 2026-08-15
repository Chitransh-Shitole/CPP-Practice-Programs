#include <iostream>
using namespace std ;

int main()
{
    int num, count = 0 ; //VARIABLE DECLARATION
    int i ;

    cout << "This Program keeps taking input until user enters a negative number" << endl ;
    cout << "For this case, negative number results in termination" << endl ; //GOTTA TELL THE CASE 

    do //DO-WHILE LOOP IMPLEMENTATION
    {
        cout << "Enter the number : " ;
        cin >> num ; //INPUT

        //CONDITIONAL STATEMENT
        if ( num < 0 ) 
        {
            cout << "Negative number entered ( " << num << " ) Code terminated" << endl ;
            count++ ; //COUNTER INCREMENTS ONLY WHEN CONDITION IS SATISFIED
            break ;
        }
    } while ( count != 1 ); //RUNS UNTIL COUNTER INCREMENTS
    return 0;
}