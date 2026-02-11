// Try to print all the even numbers below 20 using a for loop in ascending order.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 20; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    };
}