#include <iostream>
using namespace std;

int main ()
{
    char letter ;

    cout << "This program takes a letter and tells if it's a Vowel or Consonant" << endl ;
    cout << "Enter your letter : " ;
    cin >> letter ;

    //CONDITIONAL LOGIC
    if ( letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U' )
    {
        cout << letter << " is a Vowel" << endl ; 
    }
    else
    {
        cout << letter << " is a Consonant" << endl ; 
    }
    return 0;
}