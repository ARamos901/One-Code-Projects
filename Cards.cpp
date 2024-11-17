//Have to debug code later.


#include <iostream>
#include <string>

using namespace std;

void printCard() {
    const int width = 11;
    const int height = 9;
    string cardChoice;

    cout << "Please choose your card.\n Your choices are: club, diamond, heart or spade. \n";
    cout << "Your card choice is: ";
    cin >> cardChoice;

    for (int row = 0; row < height; ++row) {
        if (row == 0) {
            cout << "╔";
            for (int col = 0; col < width - 2; ++col) cout << "═";
            cout << "╗" << endl;
        } else if (row == height - 1) {
            cout << "╚";
            for (int col = 0; col < width - 2; ++col) cout << "═";
            cout << "╝" << endl;
        } else {
            if (row == 1) {
                cout << "║ A       ║" << endl;
            } else if (row == 4) {
                if (cardChoice == "club") {
                    cout << "║    ♣    ║" << endl;
                } else if (cardChoice == "diamond") {
                    cout << "║    ♦    ║" << endl;
                } else if (cardChoice == "heart") {
                    cout << "║    ♥    ║" << endl;
                } else if (cardChoice == "spade") {
                    cout << "║    ♠    ║" << endl;
                } else {
                    cout << "║         ║" << endl; // Handle invalid input
                }
            } else if (row == 7) {
                cout << "║       A ║" << endl;
            } else {
                cout << "║         ║" << endl;
            }
        }
    }
}
