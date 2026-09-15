#include <iostream>
#include <string> //FOR NAME VARIABLE
using namespace std ;

void greet(string name) //USER DEFINED FUNCTION
{
    cout << "Hello, " << name << "!" ; 
}

int main() //MAIN FUNCTION
{
    string name ;

    cout << "Enter your name : " ;
    cin >> name ;

    greet(name) ; //FUNCTION CALL
    return 0 ;
}
