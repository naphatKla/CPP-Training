#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// โจทย์คือ ให้ผู้ใช้ป้อนค่ามากี่ตัวก็ได้(จำนวนใส่ที่บรรทัดแรก) แล้วปริ้นค่าเรียงจากมากไปน้อย
// แนวคิด คือ ต้องใช้ vector แล้วลูปรับค่า จำนวนรอบตามค่า input
// จากนั้นก็จัดเรียงข้อมูลใน vector
 
 vector<int> inputElement() { // function รับค่าเข้า vector
     vector<int> result;
     int input;
     int rounds;
     cin >> rounds;
     for(int i = 0; i < rounds; i++) {
         cin >> input;
         result.push_back(input);
     }
     return result;
 }

 void printElement(vector<int> input) { // function print element
     for(int i = 0; i < input.size(); i++) {
         cout << input[i] << endl;
     }
 }

int main()
{
    vector<int> input;
    input = inputElement();
    sort(input.begin(),input.end(),greater<int>());
    printElement(input);
}