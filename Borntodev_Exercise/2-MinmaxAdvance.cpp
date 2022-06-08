#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
// libraly โครตจำเป็น
using namespace std;
/* ยากจัด
    โจทย์คือใส่เลข ไม่จำกัดจำนวน หากต้องการหยุดใส่ ให้ใส่ค่า 0 จากนั้นพิมพ์ max หรือ min (non Case sensitive ด้วย) เพื่อเรียงค่า

    ความยากของข้อนี้คือ ตัวแปรที่ป้อนเข้ามามีไม่จำกัดจำนวน และต้องเอาค่าพวกนั้นไปจัดเรียงอีก
    แนวคิดของเราคือ ต้องหันไปใช้ array dynamic หรือ vector นั้นเอง
    มันจะเป็น array ที่ปรับขนาดตามบรรจุได้ เราก็รับค่าเข้ามาแล้วเอาไปเก็บใน Vector
    ความยากต่อมาคือ ต้องรับ input max min ที่เป็น non-case-sensitve (ป้อนได้ทั้งพิมพ์ใหญ่และเล็ก)
    เราก็เลยใช้ฟังชั่น tolower เพื่อเปลี่ยนค่า input ให้เป็นตัวเล็กทั้งหมด แล้วก็ตั้งเงื่อนไขเป็น input == "max" กับ input == "min"
    เพราะไม่ว่า user จะป้อน MAX , mAx, MaX, MiN หรือแบบไหนก็ตาม tolower ก็จะแปลงเป็นพิมพ์เล็กอยู่ดี
    ทีนี้พอรับค่าว่าให้เรียง max หรือ min แล้ว ด้วยความขี้เกียจของเราก็เลยใช้ libraly algorithm มาจัดเรียง vector ซะเลย 555
    คำตอบก็จะออกมาถูกต้องนั้นเอง
    ปล. โปรแกรมนี้ต้องใส่ 0 ก่อนป้อน max min ไม่งั้นพัง
*/

// ฟังชั่นแปลงจาก String เป็น Int หากเจอค่าที่ไม่ใช่ตัวเลข return -1
// สร้างมาแต่ไม่ได้ใช้ 5555555555
int StringToInt(string Input) {
    int SizeString = Input.length()-1;
    for(int i = 0; i <= SizeString; i++) {
        if(Input[i] <= '9' && Input[i] >= '0') {
            if(i == SizeString) {
                int result = stoi(Input); // stoi ใช้แปลง string เป็น int
                return result;
            }
        }
        else {
            return -1;
        }
    }
}
// ฟังชั่นปริ้นค่า element ใน vector
void printVec(vector<int> InputNumVec) {
    for(int i = 0;i < InputNumVec.size();i++) {
        cout << InputNumVec[i] << " ";
    }
}

int main() 
{
    vector<int> InputNumVec(0);
    int InputNum;
    string InputString;
 
    while(true) {
        cin >> InputNum;
        if(InputNum == 0) {
            cin >> InputString;
            for(int i = 0; i < InputString.length(); i++) {
                InputString[i] = tolower(InputString[i]);
            }
            if(InputString == "max") {
                sort(InputNumVec.begin(), InputNumVec.end(), greater<int>()); // คำสั่งเรียงค่า มาก -> น้อย
                printVec(InputNumVec);
                break;
            }
            else if(InputString == "min") {
                sort(InputNumVec.begin(), InputNumVec.end()); // เรียงค่า น้อย -> มาก
                printVec(InputNumVec);
                break;
            }
        }
        else {
            InputNumVec.push_back(InputNum);
        }
    }
}