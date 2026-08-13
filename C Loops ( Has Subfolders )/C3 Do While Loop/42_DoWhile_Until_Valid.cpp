#include <iostream>
using namespace std;

int main()
{
    char vowel, count = 0 ;
    int i;
    
    cout << "This program keeps asking for numbers until users enters a valid input" << endl ;
    cout << "For this case, It only take vowels" << endl ; //GOTTA TELL THE CASE

    do //DO-WHILE IMPLEMENTATION
    {
        cout << "Enter Your Character : " ;
        cin >> vowel ; //INPUT

        //CONDITIONAL STATEMENT
        if ( vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
        {
            cout << "The Character entered is a Vowel" << endl ;
            count++ ; //COUNTER INCREMENTS WHEN CONDITION IS SATISFIED
            break ;
        }
        else 
        {
            cout << "The character entered is not a vowel, Try again!" << endl ;
        }
        i++ ; //LOOP INCREMENT
    }
    while ( count !=1 ); //RUNS UNTIL COUNTER INCREMENTS
    return 0 ;
}