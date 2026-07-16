#include <iostream>
using namespace std;

int main ()
{
    int year ;

    cout << "This Program takes year and tells if its a LEAP Year" << endl ;
    cout << "Enter a year : " ;
    cin >> year ;

    //LEAP YEAR LOGIC
    if ( year % 4 == 0 || year % 400 == 0 ) //LEAP YEAR CONDITIONS ( Using OR Operator )
    {
        cout << "Yes, " << year << " is a leap year" << endl ;
    }
    else 
    {
        cout << "No, " << year << " is NOT a leap year" << endl ;
    }
    return 0 ;
}