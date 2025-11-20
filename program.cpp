#include <iostream>
using namespace std;

int main() {
    int BirthYear;
    int CurrentYear;

    cout << "What is your birthday year?: ";
    cin >> BirthYear;

    cout << "What is current year?: ";
    cin >> CurrentYear;

    // Calculation
    int Age = CurrentYear - BirthYear;

    cout << "====RESULT====" << endl;
    cout << "Your age: " << Age << endl;
}