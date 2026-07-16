#include <iostream>
using namespace std;

int main()
{
    //SUBJECTS DECLARATION
    float Eng, Hin, Math, Phy, Chem ;
    
    cout << "This Program Takes marks of 5 subjects and Gives back Percentage and Grades\n" ;

    //TAKING INPUT
    cout << "Enter Marks of English : " ;
    cin >> Eng ;

    cout << "Enter Marks of Hindi : " ;
    cin >> Hin ;

    cout << "Enter Marks of Math : " ;
    cin >> Math ;

    cout << "Enter Marks of Physics : " ;
    cin >> Phy ;

    cout << "Enter Marks of chemistry : " ;
    cin >> Chem ;

    //CALCULATING PERCENTAGE
    float Percent = (Eng+Hin+Math+Phy+Chem)/5 ;

    //GRADES CONDITION
    if ( Percent >= 80 && Percent <= 100 )
    {
        cout << "Grade : A+ ( Outstanding! )" << endl ; 
    }
    else if ( Percent >= 60 && Percent < 80 )
    {
        cout << "Grade : A ( Excellent! )" << endl ; 
    }
    else if ( Percent >= 50 && Percent < 60 )
    {
        cout << "Grade : B ( Good, Can Do Better. )" << endl ; 
    }
    else if ( Percent >= 33 && Percent < 50 )
    {
        cout << "Grade : C ( Needs to Focus Strictly! )" << endl ; 
    }
    else if ( Percent >= 0 && Percent < 33 )
    {
        cout << "Grade : F ( You Failed )" << endl ; 
    }
    return 0;
}