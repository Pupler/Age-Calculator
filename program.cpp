#include <iostream>
using namespace std;

int main() {
    int BirthYear;
    int CurrentYear;

    cout << "What is your birthday year?: ";
    cin >> BirthYear;
    if (BirthYear < 1900) {
        cout << "Wrong birth year!" << endl;
        return 1;
    } else {
        cout << "What is current year?: ";
        cin >> CurrentYear;

        // Calculation
        int Age = CurrentYear - BirthYear;

        cout << "====RESULT====" << endl;
        cout << "Your age: " << Age << endl;
    }
}