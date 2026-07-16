#include <iostream>
using namespace std;

int main()
{
    float L1, L2, L3 ;

    cout << "This Program takes the length of 3 sides and checks if it's a valid Triangle" << endl;
   
    //TAKING INPUTS
    cout << "Enter length from points -> A to B : " ;
    cin >> L1 ;
    cout << "Enter length from points -> B to C : " ;
    cin >> L2 ;
    cout << "Enter length from points -> C to A : " ;
    cin >> L3 ;

    /*
        THE CONDITIONS OF VALID TRIANGLE SAYS THAT THE SUM OF LENGTH OF ANY TWO SIDES 
        OF A TRIANGLE IS ALWAYS GREATER THAN THE LENGTH OF THIRD SIDES
    */

    //CONDITIONAL CHECK
    if ( L1 + L2 > L3 && L2 + L3 > L1 && L3 + L1 > L2 )
    {
        cout << "It's a valid triangle" << endl ;
    }
    return 0 ;
}