#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printPramid(string text) 
{
    int Xmax = text.length();
    int Ymax = text.length();
    int end = text.length()-1;

    for(int y = 0; y < Ymax; y++) {
        for(int x = 0; x < Xmax; x++) {
            if(x < end)
                if(x < end-y) 
                    cout << "  ";
                else
                    cout << text[end-x] << " ";
            else
                if(x < end-y) 
                    cout << "  ";
                else 
                    cout << text[x - end] << " ";
        }
        Xmax++;
        cout << endl;
    }
}

int main()
{
    string text;
    cin >> text;
    printPramid(text);
}