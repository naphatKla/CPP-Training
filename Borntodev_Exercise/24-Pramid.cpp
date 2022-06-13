#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void printSims(int input)
{
    int Yrows = (input * 2)-1;
    int YrowCenter = input;
    int Xcolumns = input;

    for(int y = 1; y <= Yrows; y++) {
        for(int x = 1; x <= Xcolumns; x++) {
            if(x <= input-y && y < YrowCenter)
                cout << " ";
            else if(x <= y-input && y > YrowCenter)
                cout << " ";
            else 
                cout << "*";
        }
        cout << endl;
        if(y < YrowCenter)
            Xcolumns++;
        else
            Xcolumns--;
    }
} 

int main()
{
    int input;
    cin >> input;
    printSims(input);
}