#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์กลางๆ
// รับค่ามา 5 ค่า แล้วให้จัดเรียงแบบคนละบรรทัด
vector<int> inputElement(vector<int> input) // function รับค่าเข้า Vector
{
    for(int i = 0; i < input.size(); i++) {
        cin >> input[i];// หรือใช้ .push_back (ควรใช้)
    }
    return input;
}

void printElementEndl(vector<int> input) { // function ปริ้นค่าใน Vector เว้นบรรทัด
    for(int i = 0; i < input.size(); i++) {
        cout << input[i] << endl;
    }
}

int main()
{
    vector<int> input(5);
    input = inputElement(input);
    sort(input.begin(), input.end(), greater<int>()); // เรียงค่าภายใน vector
    printElementEndl(input);
}