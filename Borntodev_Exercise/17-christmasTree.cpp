#include <iostream>
#include <string>

using namespace std;
// โจทย์ยาก ให้ปริ้นต้นคริสมาส จำนวนชั้นตามที่ผู้ใช้ป้อน
// โดยแนวคิดของเราคือ จะแบ่งเป็น 2 ส่วน คือฟังชั่นปริ้น ชั้นใบกับปริ้นฐาน
// ความสัมพันธ์คือ program จะปริ้นจากซ้ายไปขวา และจากบนลงล่างเสมอ
// การปริ้นจะมี 2 ลักษณะคือ ช่องว่าง และตัวอักษร
// ซึ่งจากที่สังเกต จำนวนที่ปริ้นชั้นแรกจะเท่ากับ เลขที่ป้อน+1 (รวมจำนวนช่องว่างด้วย)
// และทุกๆชั้นย่อย การปริ้นจะเพิ่มขึ้น 1 ครั้ง
// สิ่งที่เห็นคือ ช่องว่างทางด้านซ้ายจะลดลง 1 ช่อง ทุกๆชั้นย่อย
// และฐานของต้นไม้ = (เลขที่ป้อน * 2) - 1 และลำต้นจะปริ้นอยู่ตรงกลางฐาน

void printStar(int input, int layer)  
{
    for(int y = 0; y <= layer; y++) {
        for(int x = 0; x <= input+y; x++) {
            if(x < input-y)
                cout << " ";
            else
                cout << "*";
        }
        if(y != layer)
            cout << endl;
    }
}

void printBase(int base) 
{
    int middle = (base/2)+1;
    for(int y = 1 ; y <= 2; y++) {
        if(y == 2) {
            for(int x = 1; x <= base; x++) {
                if(x == middle)
                    cout << "V";
                else
                    cout << "=";
            }   
        }
        else {
            for(int x = 1; x <= base; x++) {
                if(x == middle) 
                    cout << "|";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

int main() 
{
    int input;
    cin >> input;
    int base = (input*2) + 1;

    for(int layer = 1; layer <= input; layer++) {
        printStar(input,layer);
        cout << endl;
        if(layer == input)
            printBase(base);
    }

}