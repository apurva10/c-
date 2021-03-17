/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//int Add(int *a, int *b) ;    //Add two numbers and return the sum

#include <iostream>

using namespace std;

int Add(int *a, int *b)
{
    return(*a + *b );
}

int main()
{
    int x =5;
    int y = 10;
    int sum = Add(&x, &y);
    
    return sum;
}
