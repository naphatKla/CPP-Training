#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
// โจทย์ปานกลาง ให้ลบสระในภาษาอังกฤษออกจากชุดข้อความ
// แนวคิดของเราคือ สร้างกลุ่มเก็บสระไว้ (vector<char> vowel)
// ทีนี้ก็เอา text ที่ป้อนเข้ามาไปไล่เช็คทีละตัวว่ามีตรงกับค่าใน vector vowel ไหม
// ถ้ามีแสดงว่าเป็นสระ ก็ break ออก แต่ถ้าไม่มีจนกระทั่งเช็คสระใน vector vowel จนหมดก็ให้ตัวอักษรนั้นไปเก็บไว้ที่ temp
// พอวนลูปครบก็จะได้คำที่ไม่มีสระออกมานั่นเอง
// หรือจะใช้อีกวิธีก็คือใช้ .erase(remove) ของ library algorithm เพื่อลบตัวอักษรที่ต้องการก็ได้

void delVowel(string &text) { // แบบเขียนเอง
    vector<char> vowel = {'a','e','i','o','u'};
    string temp;
    int sizeT = text.length();
    int sizeV = vowel.size();

    for(int T = 0; T < sizeT; T++) {
        for(int V = 0; V < sizeV; V++) {
            if(tolower(text[T]) == vowel[V]) 
                break;
            else if(V == sizeV-1)
                temp += text[T];
        }
    }
    text = temp;
}

void delVowel2(string &text) { // แบบใช้ libraby algoritm  
    vector<char> vowel = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0; i < vowel.size(); i++) {
        text.erase(remove(text.begin(),text.end(),vowel[i]),text.end()); // string.erase(remove(string.begin(),string.end(),ตัวอักษรที่จะลบ),string.end());
    }
}

int main()
{
    string text;
    getline(cin, text);
    delVowel2(text);
    cout << text;
}