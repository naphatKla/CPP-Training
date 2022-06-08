#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// รับค่ามา แล้วปริ้นเป็นพีระมิด 
// แนวคิดคือดูความสัมพันธ์ ของช่องว่าง และทำลูปเพื่อปริ้นค่าทั้ง 2 แกน
// ลูปนึงไว้ขึ้นบันทัดใหม่(y-axis)
// อีกลูปเอาไว้ปริ้นดาว(x-aixs)

void printStar(int input, int I) {
    for(int i = 1; i <= input-I; i++) {
        cout << " ";
    }
    if(I == 1) {
        cout << "*";
    } 
    else {
        for(int i = 1; i <= (I*2)-1; i++) {
            cout << "*";
        }
    }
}

int main() 
{
    int input;
    cin >> input;
    for(int i = 1; i <= input; i++) {
        printStar(input,i);
        cout << endl;
    }
}