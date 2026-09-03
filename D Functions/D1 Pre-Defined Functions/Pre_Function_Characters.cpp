#include <iostream> 
#include <cctype>
using namespace std ;

int main()
{
    char character ; //CHARACTER VARIABLE
    
    cout << "This program takes an input and tells if the character is Uppercase, Lowercase, Digit or Whitespace" << endl ;
    cout << "Enter Your Character : " ;
    cin >> character ; //INPUT

    if ( isupper(character) ) //UPPERCASE CONDITION
    {
        cout << "It is an Uppercase Character" << endl ;
    }
    else if ( islower(character) ) //LOWERCASE CONDITION
    {
        cout << "It is a Lowercase Character" << endl ;
    }
    else if ( isdigit(character) ) //DIGIT CONDITION
    {
        cout << "It is a Digit" << endl ;
    }
    else if ( isspace(character) ) //WHITESPACE CONDITION
    {
        cout << "It is a Whitespace Character" << endl ;
    }
    else if ( ispunct(character) ) //SYMBOL or PUNCTUATION CONDITION
    {
        cout << "It is a Punctuation/Symbol" << endl ;
    }
    return 0 ;
}

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
THIS PROGRAM WAS VERY EASY ON ITS OWN,
IT FEATURES 5 DIFFERENT FUNCTIONS FROM <cctype>
EACH OF THEM VERIFIES A PARTICULAR CHARACTER TYPE TOLD BY THEIR NAMES.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/