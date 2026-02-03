#include <iostream>
using namespace std;

// the function main will return an integer
int main()
{
    // std::endl is equivalent to \n + std::flush
    /* std::flush forces the output buffer to be written immediately 
        when we write cout, the data may be stored in a buffer (temporary memory) instead of being written right away.
        flushing forces the buffer to be written to the destination (console, file, etc.)
        this is useful for debugging, progress indicators, real-time logging, etc.
    */
    cout << "Hello World!" << std::endl;
    return 0;
}