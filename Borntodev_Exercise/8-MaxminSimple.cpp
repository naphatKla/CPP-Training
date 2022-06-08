#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์ง่าย
// รับ 3 ค่าหา maxmin

vector<int> inputElement(vector<int> numVec) {
    for(int i = 0; i < numVec.size(); i++) {
        cin >> numVec[i];
    }
    return numVec;
}

int findmax(vector<int> numVec) {
    int max = numVec[0];
    for(int i = 0; i < numVec.size(); i++) {
        if(max < numVec[i]) {
            max = numVec[i];
        }
    }
    return max;
}

void printElement(vector<int> numVec) {
    for(int i = 0; i < numVec.size(); i++) {
        cout << numVec[i];
    }
}

int main() 
{
    vector<int> numVec(3);
    numVec = inputElement(numVec);
    // printElement(numVec);
    int max = findmax(numVec);
    cout << "MAX : " << max;
}