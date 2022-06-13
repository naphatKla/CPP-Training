#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printPramid(string text) 
{
    int Xmax = text.length();
    int Ymax = text.length();
    int TextEnd = text.length()-1;

    for(int y = 0; y < Ymax; y++) {
        for(int x = 0; x < Xmax; x++) {
            if(x < TextEnd)
                if(x < TextEnd-y) 
                    cout << "  ";
                else
                    cout << text[TextEnd-x] << " ";
            else
                if(x < TextEnd-y) 
                    cout << "  ";
                else 
                    cout << text[x - TextEnd] << " ";
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