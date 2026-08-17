#include <iostream>
#include <cstdlib> //IMPORTS RAND & SRAND FUNCTION
using namespace std;

int main()
{
    int num, input, i ;
    cout << "This program generates a random number and runs until the user guess it" << endl ;
    cout << "Guess Number within the range - ( 0 - 10 )" << endl ;

    do //DO-WHILE LOOP IMPLEMENTATION
    {
        srand(time(NULL)); 
        num = (rand() % 10) + 1 ; // RAND() GENERATES RANDOM NUMBER ,( %10 + 1 ) BRINGS BIG NUMBER INTO RANGE BY DIVIDING 
        cout << "Guess your number : " ;
        cin >> input ;

        //CONDITIONAL STATEMENT - LOOP REVERTS ON WRONG GUESS ONLY
        if ( input != num )
        {
            cout << "Wrong guess! " ;
            i++ ; 
        }
    } while ( input != num );
    cout << num << " - Number guessed correctly! - CODE STOPPED" << endl ; 
    return 0;
}

/* FOR THIS PROGRAM I HAD TO LEARN ABOUT RAND() FUNCTION FROM YOUTUBE  
I RECOMMEND TO LEARN ABOUT RAND() BEFORE CODING THE PROGRAM YOURSELF AS WELL */