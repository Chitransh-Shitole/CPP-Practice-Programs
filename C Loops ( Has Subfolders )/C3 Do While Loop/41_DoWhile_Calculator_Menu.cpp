#include <iostream>
using namespace std;

int main ()
{
    int num1, num2 ;
    char act1 ;

    cout << "This Program has calculation menu made using Do-While Loop" << endl << endl ;
    do //EXECUTES THE BODY ATLEAST ONCE - THEN CHECKS THE CONDITION ( LINE 79 ) 
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
        cin >> act1 ; //USERS CHOICE ( CAN BE a, b, c, d, n )

        switch ( act1 )
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
                
                //FOLLOW UP
                cout << "Do you want to Perform more calculations? ( y to restart / n to close )" << endl ;
                cin >> act1 ;
                //INTERNAL SWITCH CASE
                switch ( act1 )
                {
                    case 'y' :
                    {
                        system("cls"); //CLEARS THE TERMINAL 
                        break ;
                    }
                    case 'n' :
                    {
                        cout << "Menu Closed --- Program Completed" << endl ;
                        break ;
                    }
                    default :
                    {
                        system("cls") ;
                        cout << "Nevermind, I'll Restart it myself" << endl ;
                        break ;
                    }
                }
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
                cout << "Subtraction : " << num1 - num2 << endl ;
                cout << endl ;
                
                //FOLLOW UP
                cout << "Do you want to Perform more calculations? ( y to restart / n to close )" << endl ;
                cin >> act1 ;
                //INTERNAL SWITCH CASE
                switch ( act1 )
                {
                    case 'y' :
                    {
                        system("cls"); //CLEARS THE TERMINAL 
                        break ;
                    }
                    case 'n' :
                    {
                        cout << "Menu Closed --- Program Completed" << endl ;
                        break ;
                    }
                    default :
                    {
                        system("cls") ;
                        cout << "Nevermind, I'll Restart it myself" << endl ;
                        break ;
                    }
                }
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
                cout << "Multiplication : " << num1 * num2 << endl  ;
                cout << endl ;
                
                //FOLLOW UP
                cout << "Do you want to Perform more calculations? ( y to restart / n to close )" << endl ;
                cin >> act1 ;
                //INTERNAL SWITCH CASE
                switch ( act1 )
                {
                    case 'y' :
                    {
                        system("cls"); //CLEARS THE TERMINAL 
                        break ;
                    }
                    case 'n' :
                    {
                        cout << "Menu Closed --- Program Completed" << endl ;
                        break ;
                    }
                    default :
                    {
                        system("cls") ;
                        cout << "Nevermind, I'll Restart it myself" << endl ;
                        break ;
                    }
                }
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
                cout << "Division : " << num1 / num2 << "\tRemainder : " << num1%num2 << endl ;
                cout << endl ;
                
                //FOLLOW UP
                cout << "Do you want to Perform more calculations? ( y to restart / n to close )" << endl ;
                cin >> act1 ;
                //INTERNAL SWITCH CASE
                switch ( act1 )
                {
                    case 'y' :
                    {
                        system("cls"); //CLEARS THE TERMINAL 
                        break ;
                    }
                    case 'n' :
                    {
                        cout << "Menu Closed --- Program Completed" << endl ;
                        break ;
                    }
                    default :
                    {
                        system("cls") ;
                        cout << "Nevermind, I'll Restart it myself" << endl ;
                        break ;
                    }
                }
                break;
            }
            //PROGRAM TERMINATION PROGRAM CASE
            case 'n' : 
            {
                cout << "Menu Closed --- Program Completed" << endl ;
                break ;
            }
            /*DEFAULT CASE - ENTERING ANY OTHER CHARACTER WHICH IS NOT LISTED IN SWITCH WILL EXECUTE THIS BODY
            IN THIS CASE, ENTERING A CHARACTER WHICH IS NOT LISTED WILL NOT DO ANYTHING*/
            default :
            {
                cout << "Wrong Input --- Press (r) to Try again" << endl ;
                cin >> act1 ;

                //SWITCH CASE HAD AN EXTRA MARITAL AFFAIR
                switch ( act1 ) 
                {
                    case 'r' :
                    {
                        system("cls") ;
                        break ;
                    }
                    default :
                    {
                        system("cls") ;
                        cout << "Nevermind, I'll Restart it myself" << endl ;
                        break ;
                    }
                }
                break ;
            }
        }
    } while ( act1 != 'n' ); //THIS IS THE LOOP CONDITION - TOLD YA!
    return 0 ;
}