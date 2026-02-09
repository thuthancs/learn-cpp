#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text = "Hello World";
    cout << text << endl;
    getline(cin, text); // reading text input from keyboard
    cout << text << endl;
    return 0;
}