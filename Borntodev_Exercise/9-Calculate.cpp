#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์ปานกลาง
// ใส่ค่าจำนวนที่จะใส่ แล้วก็หาผลรวม

void printSum(vector<int> input) // func print sum of vector (THB unit)
{
    int sum = 0;
    for(int i = 0; i < input.size(); i++) {
        sum += input[i];
    }
    cout << sum << " THB";
 }

vector<int> inputElement(vector<int> input, int piece)  // func รับค่าเข้า vector
{
    for(int i = 0; i < piece; i++) {
        cin >> input[i];
    }
    return input;
}
 
int main() 
{
    int piece;
    cin >> piece;
    vector<int> input(piece);
    input = inputElement(input, piece);
    printSum(input);
}