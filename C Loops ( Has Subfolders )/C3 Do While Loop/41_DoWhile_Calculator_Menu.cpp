#include <iostream>
using namespace std;

int main ()
{
    int num1, num2 ;
    char action ;

    do //EXECUTES THE BODY ATLEAST ONCE - THEN CHECKS THE CONDITION ( LINE 79 ) 
    {
        cout << "This Program has calculation menu made using Do-While Loop" << endl << endl ;
     
        //MENU VISUALS
        cout << "==================================" << endl ;
        cout << "|    a   ->    Addition          |" << endl ;
        cout << "|    b   ->    Subtraction       |" << endl ;
        cout << "|    c   ->    Multiplication    |" << endl ;
        cout << "|    d   ->    Division          |" << endl ;
        cout << "|    x   ->    Terminate         |" << endl ;
        cout << "==================================" << endl ;

        cout << "\nYour Choice : " ;
        cin >> action ; //USERS CHOICE ( CAN BE a, b, c, d, x )

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
                cout << "Addition : " << num1 + num2 << endl ;
                break ;
            }
            //SUBTRACTION CASE
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
            //MULTIPLICATION CASE
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
            //DIVISION CASE
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
            //PROGRAM TERMINATION PROGRAM CASE
            case 'x' : 
            {
                cout << "Menu Closed --- Program Completed" << endl ;
                break ;
            }
            /*DEFAULT CASE - ENTERING ANY OTHER CHARACTER WHICH IS NOT LISTED IN SWITCH WILL EXECUTE THIS BODY
            IN THIS CASE, ENTERING A CHARACTER WHICH IS NOT LISTED WILL NOT DO ANYTHING*/
            default :
            {
                cout << "Wrong Input --- Press Enter & Try again" << endl ; //THIS IS AN EXAMPLE TOO
                cout << endl ;
            }
        }
    } while ( action != 'x' ); //THIS IS THE LOOP CONDITION - TOLD YA!
    return 0 ;
}