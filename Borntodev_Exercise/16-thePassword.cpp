#include <iostream>
#include <string>

using namespace std;
// โจทย์ปานกลาง คือให้ป้อน Password ที่ต้องมี ตัวใหญ่อย่างน้อย 1 ตัว ตัวเล็กอย่างน้อย 1 ตัว ตัวเลขอย่างน้อย 1 ตัว ตัวอักษรพิเศษอย่างน้อย 1 ตัว
// แนวคิดของเราคือ ใช้ id ของตัวอักษร(asciinumber) มากำหนดเงื่อนไข
// อ้างอิง asciinumber = https://www.ascii-code.com/?fbclid=IwAR1rB4dt6j0PlLA07s_xsBU5at1z__jvTzF36NwC3IjL8vtx7fBtMufh8dc
// ตัวเลข 0-9 id 48 - 57
// พิมพ์ใหญ่ id 65 - 90
// พิมพ์เล็ก id 97 - 122
// นอกนั้นเป็น ปุ่มอื่นๆ และอักษรพิเศษ

int main() 
{
    string password;
    bool numberCheck = false;
    bool smallletCheck = false;
    bool bigletCheck = false;
    bool specialletCheck = false;

    cin >> password;

    if(password.length() >= 3 && password.length() <= 20) {
        for(int i = 0; i < password.length(); i++) {
            if(password[i] >= 48 && password[i] <= 57) {
                numberCheck = true;
            }
            else if(password[i] >= 65 && password[i] <= 90) {
                bigletCheck = true;
            }
            else if(password[i] >= 97 && password[i] <= 122) {
                smallletCheck = true;
            }
            else {
                specialletCheck = true;
            }
        }
        if(numberCheck && smallletCheck && bigletCheck && specialletCheck)
            cout << "Valid";
        else 
            cout << "Invalid";
    }
    else
        cout << "Invalid";
}