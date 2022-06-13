#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//โจทย์ยาก ให้นำข้อความมาแปลงเป็นรหัส ATM โดยให้ตรวจสอบตัวเลขในกลุ่มข้อความ แล้วเอาตัวเลขมาบวกกัน = รหัส ATM และหากผลรวมน้อยกว่า 4 หลักให้เติม 0 ไปด้านหน้า
// แนวคิดของเราคือ ฟังชั่นแรก getNumFromPass เราจะหาว่าตัวไหนไม่ใช่ตัวเลขบ้าง แล้วให้ตัวนั้น = ' ' ช่องว่าง
// หลังจากผ่านฟังชั่น getNumFromPass ก็จะได้เป็นกลุ่มตัวเลขออกมาอย่างเช่น 'ab17cd2hjekl100' => '  17  2    100'
// ทีนี้กเราสร้างฟังชั่น numToPass เพื่อเอาเลขที่ได้มาบวกกัน โดยการ detect เลขของเราคือ เช็คตัวอักษรแต่ละตัว
// ถ้าเจอตัวเลขให้เก็บไว้ใน string temp และหากเจอช่องว่าง แสดงว่าหมดกลุ่มเลขนั้นแล้ว ก็ให้ result(int) += stoi(temp)
// เราก็จะได้กลุ่มตัวเลขที่บวกกันออกมาเก็บไว้ใน result ทีนี้ก็เอาไปเช็คต่อว่าเลขน้อยกว่า 4 หลักไหม ถ้าน้อยกว่าก็วนใส่ 0 

void getNumFromPass(string &text) 
{
    for(int i = 0; i < text.length(); i++) {
        if(!(text[i] >= 48 && text[i] <= 57)) 
            text[i] = ' ';
    }
}

string numToPass(string &text) 
{
    int result = 0;
    string temp;
    for(int i = 0; i < text.length(); i++) {
        if(text[i] != ' ') {
            temp += text[i];
            if(i == text.length()-1) {
                result += stoi(temp);
                temp.clear();
            }
        }
        else if(temp.length() >= 1){
            result += stoi(temp);
            temp.clear();
        }
    }
    temp = to_string(result);

    if(temp.length() < 4) {
        int sizeTemp = temp.length();
        for(int i = 0; i < 4-sizeTemp; i++) {
            temp.insert(temp.begin(),'0');
        }
    }
    return temp;
}

int main()
{
    string text;
    cin >> text;
    getNumFromPass(text);
    cout << numToPass(text);

}