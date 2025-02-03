#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <algorithm>
#include <cctype>
#include <thread>
#include <chrono>


void RankCardT(int input1); //Rank For Top
void RankCardB(int input1); //Rank For Bottom
void KindSuit(string input2);

void NewFunction();

void printCard(vector<int> kinds, vector<string> suits) {

    const int width = 11;
    const int height = 9;

    for (int row = 0; row < height; ++row) {

        for (size_t i = 0; i < kinds.size(); ++i) {

            if (row == 0) {
                cout << "╔";
                for (int col = 0; col < width - 2; ++col) cout << "═";
                cout << "╗";


            } else if (row == height - 1) {
                cout << "╚";
                for (int col = 0; col < width - 2; ++col) cout << "═";
                cout << "╝";


            } else {
                if (row == 1) {
                    RankCardT(kinds[i]);
                }
                
                else if (row == 4) {
                    KindSuit(suits[i]);
                }
                
                else if (row == 7) {
                    RankCardB(kinds[i]);
                }
                
                else {
                    cout << "║         ║";
                }
            }
            if (i < kinds.size() - 1) cout << " "; // Add space between cards
        }
        cout << endl; // End of row
    }
}

void RankCardT(int input1) {


    if (input1 == 1) {
        cout << "║ A       ║";
    }
    
    else if (input1 > 1 && input1 < 10) {
        cout << "║ " << input1 << "       ║";
    }
    
    else if (input1 == 10) {
        cout << "║ 10      ║";
    }
    
    else if (input1 == 11) {
        cout << "║ J       ║";
    }
    
    else if (input1 == 12) {
        cout << "║ Q       ║";
    }
    
    else if (input1 == 13) {
        cout << "║ K       ║";
    }
    
    else {
        cout << "║         ║";
    }
}

void RankCardB(int input1) {
    if (input1 == 1) {

        cout << "║       A ║";

    } else if (input1 > 1 && input1 < 10) {

        cout << "║       " << input1 << " ║";

    } else if (input1 == 10) {
        cout << "║      " << input1 << " ║";

    } else if (input1 == 11) {

        cout << "║       J ║";

    } else if (input1 == 12) {

        cout << "║       Q ║";

    } else if (input1 == 13) {

        cout << "║       K ║";

    } else {
        cout << "║         ║";
    }
}

void KindSuit(string input2) {


    if (input2 == "club") {
        cout << "║    ♣    ║";

    } else if (input2 == "diamond") {

        cout << "║    ♦    ║";
    } else if (input2 == "heart") {

        cout << "║    ♥    ║";

    } else if (input2 == "spade") {

        cout << "║    ♠    ║";

    } else {
        cout << "║         ║";
    }
}

int main() {
    // Number of cards the user wants to input
    int numCards;
    cout << "Enter the number of cards: ";
    cin >> numCards;

    vector<int> kinds(numCards);
    vector<string> suits(numCards);

    // Get the card ranks)
    cout << "Enter the ranks of the cards (separate by space please): ";
    for (int i = 0; i < numCards; ++i) {
        cin >> kinds[i];
    }

    // Get the suits of the cards
    cout << "Enter the suits of the cards (separate by space please): ";
    for (int i = 0; i < numCards; ++i) {
        cin >> suits[i];
        
        
        //to make sure  user input ends up lowercase
        transform(suits[i].begin(), suits[i].end(), suits[i].begin(), ::tolower);
    }

 
    cout<<"Dealing your cards...\n"<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    
    printCard(kinds, suits);
    
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    return 0;
}
