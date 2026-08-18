#include <iostream>
using namespace std;

int main()
{
    int i ;
    char option ;
    int subnum ;
    int marks ;

    cout << "This program keeps running until user chooses EXIT" << endl ;
    cout << "For this case, It calculates student's Remark" << endl ;

    do
    {
        cout << "+===============PROGRAM==MENU===============+" << endl ;
        cout << "|     (a) - Calculate Percentage/Grades     |" << endl ;
        cout << "|     (b) - Predict Pass or Fail            |" << endl ;
        cout << "|     (c) - Exit                            |" << endl ;
        cout << "+===========================================+" << endl ;

        cout << "Your Choice : " ;
        cin >> option ;
        cout << endl ;

        switch ( option )
        {
            case 'a' :
            {
                int sum = 0;
                
                system ("cls") ;
                cout << "Calculate Percentage/Grades ---------" << endl << endl ;
                cout << "Number of Subjects : " ;
                cin >> subnum ;
                cout << endl ;

                for ( int j = 1 ; j <= subnum ; j++ )
                {
                    cout << "Enter marks of subject " << j << " : " ;
                    cin >> marks ;

                    if ( marks > 100 )
                    {
                        cout << "\033[91m(!) - Marks > 100 is invalid - \033[0m" << endl ;
                    }
                    else 
                    {
                        sum = sum + marks ;
                    }
                }

                float percentage = sum/(subnum) ;

                cout << endl ;
                cout << "Total Marks : " << sum << "/" << subnum*100 << endl;
                cout << "Percentage  : " << percentage << "%" << endl << endl;

                break ;
            }
            case 'b' :
            {
                int fail_count = 0 ;

                system ("cls") ;
                cout << "Predict Pass/Fail ----------" << endl << endl ;
                cout << "Number of subject : " ;
                cin >> subnum ;
                cout << endl ;

                for ( int k = 1 ; k <= subnum ; k++ )
                {
                    cout << "Enter marks of subject " << k << " : " ;
                    cin >> marks ;

                    if ( marks > 100 ) 
                    {
                        cout << "\033[91m(!) - Marks > 100 is invalid - \033[0m" << endl ;
                    }
                    else if ( marks < 33 )
                    {
                        fail_count++ ;
                    }
                }
                if ( fail_count == 0 )
                {
                    cout << endl ;
                    cout << "\033[92mYou Passed all the Subjects!\033[0m" << endl << endl ;
                }
                else 
                {
                    cout << endl ;
                    cout << "\033[91mYou Failed in " << fail_count << " subject!\033[0m" << endl << endl ;
                }
                
                break;
            }
            case 'c' :
            { 
                cout << "Program Closed" << endl ;
                return 0 ;
                break ;
            }
            default :
            {
                system ("cls") ;
                cout << "\033[91mWrong Input - Try Again! \033[0m" << endl ;
                continue ;
            }
        }

        //FOLLOW UP
        cout << "What do you want ? " << endl ;
        cout << "+=======================+" << endl ;
        cout << "|   (c)  -  Close       |" << endl ;
        cout << "|   (r)  -  Restart     |" << endl ;
        cout << "+=======================+" << endl ;

        cout << "Your choice : " ;
        cin >> option ;

        if ( option == 'r' )
        {
            system("cls") ;
        }
        else if ( option == 'c' )
        {
            cout << "Program closed" << endl ;
            return 0 ;
        }
        else 
        {
            system("cls") ;
            cout << "\033[91mWrong Input - Try Again! \033[0m" << endl ;
        }
    } while ( option != 'c' );
    return 0 ;
}