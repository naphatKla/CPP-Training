#include <iostream>
#include <string>

using namespace std;

// โจทย์ปานกลาง ให้สลับตำแหน่งตัวอักษร เช่น abc => cba
// แนวคิดของเราคือ สร้าง temp มาเก็บค่าตัวที่[i] จากนั้นก็ให้ตัวที่[i] = ตัวสุดท้ายจากด้านหลัง หรือตัวที่[size-i-1] 
// ทีนี้ก็ให้ตัวสุดท้าย [size-i-1] = temp ก็จะได้การสลับตำแหน่ง โดยมีจำนวนรอบ loop = size/2 เพราะเราสลับตัวหน้ากับตัวหลัง(เปลี่ยนแปลง2ตำแหน่งใน 1 ลูป)
void revertLetter(string &text) {
    char temp;
    int size = text.length();

   for(int i = 0; i < size/2; i++) {
        temp = text[i];
        text[i] = text[size-i-1];
        text[size-i-1] = temp;
   } 
}

int main()
{
    string text;
    getline(cin, text);
    revertLetter(text);
    cout << text;
}