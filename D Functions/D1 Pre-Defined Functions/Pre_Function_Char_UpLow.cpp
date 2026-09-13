#include <iostream>
#include <cctype>
using namespace std;

int main() //MAIN FUNCTION
{
    char character ;
    char choice ;

    char upp, low ; //UPPERCASE & LOWERCASE

    cout << "This program converts an Alphabet to Uppercase & Lowercase using toupper() & tolower()" << endl ;
    cout << "Enter your character : " ;
    cin >> character ;
    
    if ( isalpha(character) ) //CHECKS CHARACTER TYPE - ALPHABET
    {
        cout << "\n[ press (1) to Uppercase the letter ]" << endl ;
        cout << "[ press (2) to Lowercase the letter ]" << endl << endl ;
        cout << "Your choice : " ;
        cin >> choice ;

        switch ( choice ) 
        {
            case '1' : //UPPERCASE CONDITION
            {
                upp = toupper(character) ;
                cout << "Uppercased : " << upp ;
                return 0 ;
            }
            case '2' : //LOWERCASE CONDITION
            {
                low = tolower(character) ;
                cout << "Lowercased : " << low ;
                return 0 ;
            }
            default : //INVALID OPERATION CHOICE
            {
                cout << "invalid" ;
            }
        }
    }
    else 
    {
        cout << "Invalid Character - Try again" << endl ; //INVALID CHARACTER ( NOT ALPHABET )
    }
    return 0 ;
}