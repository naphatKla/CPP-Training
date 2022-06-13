#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void inputElement(vector<string> &ChessInput)
{
    string temp;
    for(int i = 0; i < 8; i++) {
        cin >> temp;
        ChessInput.push_back(temp);
    }
}

int advatageChance(vector<string> ChessInput)
{
    int Chance = 0;
    for(int i = 0; i < ChessInput.size(); i++) {
        for(int a = 0; a < ChessInput[i].length(); a++) {
            char letter = ChessInput[i][a];
            if(letter == 'P')
                Chance += 1;
            else if(letter == 'N')
                Chance += 3;
            else if(letter == 'B')
                Chance += 3;
            else if(letter == 'R')
                Chance += 5;
            else if(letter == 'Q')
                Chance += 9;
            else if(letter == 'p')
                Chance -= 1;
            else if(letter == 'n')
                Chance -= 3;
            else if(letter == 'b')
                Chance -= 3;
            else if(letter == 'r')
                Chance -= 5;
            else if(letter == 'q') 
                Chance -= 9;
        }
    }
    return Chance;
}

int main()
{
    int advantagevalue;
    vector<string> ChessInput;
    inputElement(ChessInput);
    advantagevalue = advatageChance(ChessInput);
    if(advantagevalue == 0)
        cout << "equal";
    else
        cout << advantagevalue;
}