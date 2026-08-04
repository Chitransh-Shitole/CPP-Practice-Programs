#include <iostream>
using namespace std;

int main()
{
    int num, count = 0 ; //INITIAL

    cout << "This Program keeps taking input until user enters Zero" << endl ;
    
    while ( num != 0 ) //WHILE LOOP 
    {
        count++ ; //COUNTS THE NUMBER ENTERED

        cout << "Enter Number " << count << " : " ;
        cin >> num ;

        //BREAKING CONDITION
        if ( num == 0 ) 
        {
            cout << "Zero Pressed - Loop Done" << endl ;
            break ; 
        }
    }
    return 0 ;
}