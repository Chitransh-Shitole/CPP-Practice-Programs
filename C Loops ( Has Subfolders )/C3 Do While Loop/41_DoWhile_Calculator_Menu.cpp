#include <iostream>
using namespace std;

int main ()
{
    int num1, num2 ;
    char action ;

    do
    {
        cout << "==================================" << endl ;
        cout << "|   1.  a   ->  Addition         |" << endl ;
        cout << "|   2.  b   ->  Subtraction      |" << endl ;
        cout << "|   3.  c   ->  Multiplication   |" << endl ;
        cout << "|   4.  d   ->  Division         |" << endl ;
        cout << "==================================" << endl ;

        cout << "\nYour Choice : " ;
        cin >> action ;

        switch ( action )
        {
            case 'a' :
            {
                cout << "Addition ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;
                cout << "Addition : " << num1 + num2 << endl ;
                cout << endl ;
                break ;
            }
            case 'b' :
            {
                cout << "Subtraction ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;
                cout << "Subtraction : " << num1 - num2 << endl ;
                cout << endl ;
                break ;
            }
            case 'c' :
            {
                cout << "Multiplication ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;
                cout << "Multiplication : " << num1 * num2 << endl  ;
                cout << endl ;
                break ;
            }
            case 'd' :
            {
                cout << "Division ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;
                cout << "Division : " << num1 / num2 << "\tRemainder : " << num1%num2 << endl ;
                cout << endl ;
                break ;
            }
            case 'x' : 
            {
                cout << "Menu Closed --- Program Completed" << endl ;
                break ;
            }
            default :
            {
                cout << "Wrong Input --- Press Enter & Try again" << endl ;
                cout << endl ;
            }
        }
    } while ( action != 'x' );
    return 0 ;
}