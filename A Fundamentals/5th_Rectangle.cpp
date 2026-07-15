#include <iostream>
using namespace std;

int main ()
{
    int length, breadth, area, perimeter ;

    cout << "Program for finding area and perimeter of rectangle" << endl ;
    cout << "Enter Dimensions ___________" << endl ;
    cout << "Enter length of Rectangle : " ;
    cin >> length ;
    cout << "Enter breadth of Rectangle : " ;
    cin >> breadth ;

    //CALCULATION LOGIC
    area = length * breadth ;
    perimeter = ( length + breadth ) * 2 ;

    //PRINTING THEM
    cout << "\nArea of rectangle :\t\t" << area << endl ;
    cout << "Perimeter of rectangle :\t" << perimeter << endl ;

    return 0 ;
}