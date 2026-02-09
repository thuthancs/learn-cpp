#include<iostream>
using namespace std;

// Print which age group the people belong to according to the age as given here.

// Child ( < 20 years old ) Adult ( >= 20 and < 60 years old) Retired ( >= 60 years old)

int main() {
    int age;

    cin >> age;

    if (age < 20) {
        cout << "Child" << endl;
    } else if (age >= 20 && age < 60) {
        cout << "Adult" << endl;
    } else {
        cout << "Retired" << endl;
    };

    return 0;
}

