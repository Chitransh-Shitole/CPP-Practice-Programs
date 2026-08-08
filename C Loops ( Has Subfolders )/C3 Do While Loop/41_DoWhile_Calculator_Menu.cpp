#include <iostream>
using namespace std;

int main ()
{
    int num1, num2 ;
    char action ;

    cout << "This Program has calculation menu made using Do-While Loop" << endl << endl ;
    do //EXECUTES THE BODY ATLEAST ONCE - THEN CHECKS THE CONDITION ( LINE 105 ) 
    {
        //MENU VISUALS
        cout << "+================================+" << endl ;
        cout << "|         PROGRAM  MENU          |" << endl ;
        cout << "|================================|" << endl ;
        cout << "|    a   ->    Addition          |" << endl ;
        cout << "|    b   ->    Subtraction       |" << endl ;
        cout << "|    c   ->    Multiplication    |" << endl ;
        cout << "|    d   ->    Division          |" << endl ;
        cout << "|    n   ->    Terminate         |" << endl ;
        cout << "+================================+" << endl ;

        cout << "\nYour Choice : " ;
        cin >> action ; //USERS CHOICE ( CAN BE a, b, c, d, n )

        switch ( action )
        {
            //ADDITION CASE
            case 'a' :
            {
                cout << "Addition ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;
                
                cout << "Addition : " << num1 + num2 << endl << endl ;
                break;

            }
            //SUBTRACTION CASE
            case 'b' :
            {
                cout << "Subtraction ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;

                cout << "Subtraction : " << num1 - num2 << endl << endl ;
                break;
            }
            //MULTIPLICATION CASE
            case 'c' :
            {
                cout << "Multiplication ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;

                cout << "Multiplication : " << num1 * num2 << endl << endl ;
                break;
            }
            //DIVISION CASE
            case 'd' :
            {
                cout << "Division ------------ " << endl ;
                cout << "Enter 1st Number : " ;
                cin >> num1 ;
                cout << "Enter 2nd Number : " ; 
                cin >> num2 ;

                if ( num2 == 0 )
                {
                    cout << "Dividing by Zero is not allowed" << endl ;
                }
                else 
                {
                    cout << "Division : " << num1 / num2 << "\tRemainder : " << num1%num2 << endl << endl ;
                }
                break;
            }
            //PROGRAM TERMINATION PROGRAM CASE
            case 'n' : 
            {
                cout << "Menu Closed --- Program Completed" << endl ;
                return 0;
            }
            //CASE DEFAULT 
            default :
            {
                cout << "Wrong Input --- Try again" << endl ;
                continue ;
            }
        }
        // FOLLOW-UP 
        cout << "( y to restart / n to close ) : " ;
        cin >> action;

        if (action == 'y')
        {
            system("cls");
        }
    } while ( action != 'n' ); //THIS IS THE LOOP CONDITION - TOLD YA!
    return 0 ;
}