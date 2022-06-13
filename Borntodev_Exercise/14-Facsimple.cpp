#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
//โจทย์ง่าย ให้หา fac จากตัวเลขที่ป้อนเข้าไป
long long factorial(int numberInput) // หา fac ใช้ long long เพื่อเพิ่มขนาดความจุ (เนื่องจากยกกำลังเยอะๆ int เก้บไม่พอ)
{
    long long result = 1.0;
    for(int i = 1; i <= numberInput; i++) {
        result *= i;
    }
    return result;
}

int main() 
{
    int numberInput;
    cin >> numberInput;
    cout << factorial(numberInput);

}