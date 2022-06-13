#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// โจทย์ปานกลาง 
void inputElement(vector<int> &objectId, int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        objectId.push_back(temp);
    }
}

void printPosition(vector<int> objectId, int objectSearch) {
    int count = 1;
    for(int i = 0; i < objectId.size(); i++) {
        if(objectId[i] == objectSearch) {
            if(count != 1) 
                cout << ",";
            cout << i+1;
            count++;
        }
            
    }
}

int main()
{
    int n;
    int objectSearch;
    vector<int> objectId;
    cin >> n;
    inputElement(objectId,n);
    cin >> objectSearch;
    cout << "Position: ";
    printPosition(objectId,objectSearch);
}