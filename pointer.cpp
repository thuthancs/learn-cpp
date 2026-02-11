/*
Indirectly access and modify the value of "n":

Create 2 pointers p1 and p2 for the given integer "n".
p1 is the void pointer.
p2 the int pointer.
p1 must be assigned to p2.
Indirectly increase the value of n's content by 1 and print the value.
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    void *p1;
    int *p2;

    p1 = &n;
    p2 = (int *)p1;
    *p2 += 1;

    cout << n << endl;
    return 0;
}