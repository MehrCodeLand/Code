#include <iostream>
using namespace std;

// Recursion
int factorial(int number);

int main()
{
    int result = factorial(5);
    cout << "result : " << result << endl ;
}


int factorial(int number )
{
    if( number < 0 )
    {
        return -1 ;
    }if(number == 0 )
    {
        return 1 ;
    }else 
    {
        return (number * factorial(number - 1 ));
    }
}