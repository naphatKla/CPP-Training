#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์ ง่าย
// รับค่า และหาค่าเฉลี่ยเกรด
int main() {
    float Thai, Math, Eng, Sci, Sport;
    float sum = 0;
    float GPA;
    cin >> Thai >> Math >> Eng >> Sci >> Sport;

    cout << "THAI = ";
    printf("%.1f", Thai);
    cout << "\nMATH = ";
    printf("%.1f", Math);
    cout << "\nENGLISH = ";
    printf("%.1f", Eng);
    cout << "\nSCIENCE = ";
    printf("%.1f", Sci);
    cout << "\nSPORT = ";
    printf("%.1f", Sport);
    cout << "\n---\n";
    sum = Thai + Math + Eng + Sci + Sport;
    GPA = sum / 5;
    cout << "GPA = ";
    printf("%.1f", GPA);
}