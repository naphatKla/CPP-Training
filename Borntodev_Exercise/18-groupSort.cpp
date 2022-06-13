#include <iostream>
#include <string>
#include <vector>

using namespace std;

// โจทย์ปานกลาง
// ให้รับค่าเข้ามา บรรทัดแรก X = ค่าที่จะจัดกลุ่ม , บรรทัด2 N = จำนวนกลุ่ม , บรรทัด3 F T group
// โดยเงื่อนไขคือ F <= X <= T
int main() 
{
    int X, N;
    cin >> X >> N;
    vector<int> F,T;
    vector<string> group;
    string temp1 , temp2, temp3;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        cin >> temp1 >> temp2 >> temp3;
        F.push_back(stoi(temp1));
        T.push_back(stoi(temp2));
        group.push_back(temp3);
    }
    for(int i = 0; i < N; i++) {
        if(F[i] <= X && X <= T[i])
            cout << group[i];
    }
}