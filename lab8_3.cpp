#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int age, height;
    long long bounty;
    string character;

    // Prompt user for input
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 25) {
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100) {
            character = "Chopper";
        } else if (height >= 180) {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty <= 1100000000) {
                character = "Sanji";
            } else {
                character = "Zoro";
            }
        } else {
            character = "Usopp";
        }
    } else if (age <= 60) {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty <= 500000000) {
            character = "Franky";
        } else {
            character = "Jinbe";
        }
    } else {
        character = "Brook";
    }

    cout << "Your character = " << character;

    return 0;
}
