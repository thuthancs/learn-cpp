#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
};

int main()
{
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << sum(a, b, c) << endl;
    return sum(a, b, c);
}