#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// โจทย์ง่าย ให้ใส่จำนวนลูกค้า แล้วรับข้อมูลลูกค้าออกมาแสดงผล
void printElement(vector<string> fullname, vector<int> years, vector<string> gender) {
    for(int i = 0; i < fullname.size(); i++) {
        cout << fullname[i] << " (age : " << 2017 - years[i] << ")" << endl;
    }
}

int main() 
{
    int numberOfcustomers;
    vector<int> years;
    vector<string> fullname;
    vector<string> gender;
    string temp;

    cin >> numberOfcustomers;
    for(int i = 0; i < numberOfcustomers; i++) {
        cin.ignore();
        getline(cin, temp);
        fullname.push_back(temp);
        cin >> temp;
        years.push_back(stoi(temp));
        cin >> temp;
        gender.push_back(temp);
    }
    cout << "--Customers Information--\n";
    printElement(fullname,years,gender);
}