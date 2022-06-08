#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// โจทย์ง่าย
// รับค่ามาแสดงผล 
int main() 
{
    string fname;
    string lname;
    string adress;
    string gender;
    string tel;
    
    getline(cin, fname);
    getline(cin, lname);
    getline(cin, adress);
    getline(cin, gender);
    getline(cin, tel);
    cout << "--- Customer Detail ---\n";
    cout << "Name : " << fname << " " << lname << endl;
    cout << "Address : " << adress << endl;
    cout << "Gender : " << gender << endl;
    cout << "Tel : " << tel;
}