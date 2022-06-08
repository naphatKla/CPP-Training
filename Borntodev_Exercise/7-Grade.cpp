#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์ง่าย
// รับคะแนนมาหาเกรด
int main() 
{
    int point;
    cin >> point;
    string grade;

    if(point >= 90 && point <= 100) {
        grade = "A";
    }
    else if(point < 90 && point >= 85) {
        grade = "B+";
    }
    else if(point < 85 && point >= 80) {
        grade = "B";
    }
    else if(point < 80 && point >= 75) {
        grade = "C+";
    }
    else if(point < 75 && point >= 70) {
        grade = "C";
    }
    else if(point < 70 && point >= 65) {
        grade = "D+";
    }
    else if(point < 65 && point >= 60) {
        grade = "D";
    }
    else if(point < 60 && point >= 0) {
        grade = "F";
    }
    else if(point < 0) {
        grade = "Error : Value must be greater than or equal to 0.";
    }
    else if(point > 100) {
        grade = "Error : Value must be less than or equal to 100.";
    }
    cout << grade;
}