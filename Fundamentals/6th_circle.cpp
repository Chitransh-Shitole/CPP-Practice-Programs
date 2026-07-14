#include <iostream>
using namespace std;

int main ()
{
    float pi = 3.14 ;
    float radius, area, circumference;
    
    cout << "Program for finding area and circumference of circle" << endl ;
    cout << "Enter the radius of circle : " ;
    cin >> radius ;

    //CALCULATING LOGIC
    area = pi*(radius*radius) ;
    circumference = 2*(pi*radius) ;

    //PRINTING THEM
    cout << "Area of the Circle :\t ~ " << area << endl ;
    cout << "Circumference of circle: ~ " << circumference << endl ;

    return 0;
}