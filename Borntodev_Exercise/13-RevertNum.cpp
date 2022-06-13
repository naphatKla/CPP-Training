#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
// โจทย์ง่าย ให้ใส่จำนวนตัวเลขที่จะป้อน แล้วป้อนตัวเลขลงไป จากนั้น Revert ให้ output แสดงจากหลังมาหน้า

vector<int> inputElement(int size)  // ลูปรับค่า input
{    
    vector<int> number;
    int temp;
    for(int i = 0; i < size; i++) {
        cin >> temp;
        number.push_back(temp);
    }
    return number;
}

vector<int> RevertElement(vector<int> number)  // Revert vector
{
    int temp;
    for(int i = 0; i < number.size() / 2; i++) {
        temp = number[i];
        number[i] = number[number.size() - i - 1]; 
        number[number.size() - i - 1] = temp;
    }
    return number;
}

void printElement(vector<int> number) // print element in vector
{
    for(int e:number) {  // มันคือ foreach ใน c++  // หมายความว่าให้ e = index ของ number
        cout << e << endl;
    }
}

int main() 
{
    int size;
    cin >> size;
    vector<int> number = inputElement(size);
    printElement(RevertElement(number));
}