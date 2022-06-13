#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//โจทย์ปานกลาง-ยาก เมื่อ Y ปีที่แล้วนายA แก่กว่านายB เป็นจำนวน M เท่า และปัจจุบันนายA แก่กว่านายB เป็นจำนวน N ปี ถามว่าตอนนี้ทั้งคู่อายุเท่าไร
// input N M Y 
// output บรรทัดแรก ค่า A B เป็นอายุของนายA และนายB
// แนวคิดของเราคือดจะใช้การแก้ สมการ 2 ตัวแปรแก้โจทย์
// จากโจทย์ สมกการแรก จะได้ผลต่างอายุ N = A - B
// และเมื่อ Y ปีที่แล้ว อายุห่างกัน M เท่า ก็จะได้ M = (A-Y)/(B-Y) จากนั้นก็ย้ายข้างแทนค่าตัวแปร  
int main()
{
    int N,M,Y,A,B;
    cin >> N >> M >> Y;
    B = (N-Y+Y*M)/(M-1);
    A = N + B;
    cout << A << " " << B;
}