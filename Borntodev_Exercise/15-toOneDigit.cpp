#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// โจทย์ปานกลาง คือให้ใส่ตัวเลขเข้ามากี่หลักก็ได้แล้วเอา แต่ละหลักบวกกันจนกว่าจะเหลือ 1 หลัก เช่น ป้อน  12345
// 1+2+3+4+5 = 15 = 1+5 = 6
void sumtoOnedigit(string input) 
{
    while(input.length() != 1) {
        int result = 0;
        for(int i = 0; i < input.length(); i++) {
            result += (input[i] - '0'); // input[i] - '0' คือการแปลง char เป็น int ด้วยการดำเนินการในตัวแปล int
        }
        input = to_string(result);
    }    
    cout << input;
}

int main()
{
    string input;
    cin >> input;
    sumtoOnedigit(input);
}