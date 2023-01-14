#include <iostream>
using namespace std ;


// call by val 
void FuncVal(int a)
{
    ++a;
}

// call by ref
void FuncRef(int *a )
{
    ++*a;
}

int main()
{
    int number1 = 10 ;
    int number2 = 200 ;

    cout << "number1 : " << number1 << endl ;
    cout << "number2 : " << number2 << endl ;

    FuncVal(number1);
    FuncRef(&number2);

    cout << "after Clling Function" << endl ;


    cout << "number1 : " << number1 << endl ;
    cout << "number2 : " << number2 << endl ;

}