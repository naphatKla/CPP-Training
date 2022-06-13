#include <iostream>
#include <string>

using namespace std;

// โจทย์ปานกลาง ให้สลับตัวใหญ่ตัวเล็กกัน เช่น Abc => aBC โดยกำหนดป้อนแค่ตัวหนังสือเท่านั้นไม่รวมตัวพิเศษ
// แนวคิดของเราคือ เอา text มาลูปเช็คทีละตัว ถ้าเจอตัวพิมใหญ่ หรือตัวที่มี Asciinumber ตั้งแต่ 65-90 ก็เปลี่ยนมันให้เป็นพิมพ์เล็กด้วย tolower
// ถ้าเจอ asciinumber อื่น แสดงว่าเป็นตัวพิมพ์เล็ก ก็เปลี่ยนมันเป็นพิมพ์ใหญ่ด้วย toupper
void switchUpperLower(string &text) 
{
    int size = text.length();
    for(int i = 0; i < size; i++) {
        if(text[i] >= 65 && text[i] <= 90)
            text[i] = tolower(text[i]);
        else
            text[i] = toupper(text[i]);
    }
}

int main()
{
    string text;
    getline(cin, text);
    switchUpperLower(text);
    cout << text;
}