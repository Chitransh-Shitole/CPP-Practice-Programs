#include <iostream>
#include <string>
using namespace std;

void display(string name, string course) //USER DEFINED FUNCTIONS + ARGUEMENTS
{
    system ("cls") ;
    cout << "Name : " << name << endl ;
    cout << "Course : " << course << endl ;
}

int main() //MAIN FUNCTION
{
    string name ;
    string course ;

    cout << "This program takes your Name & Course and prints it using User Defined Function" << endl ;
    cout << "Enter Name : " ;
    cin >> name ; //INPUT 1
    cout << "Enter Course : " ;
    cin >> course ; //INPUT 2

    display(name, course) ; //FUNCTION CALL
    return 0 ; 
}