#include <iostream>
#include <string>
using namespace std;
/* ยากจัด
    โจทย์คือนำคำที่ป้อนเข้าไป สลับตำแหน่ง หน้าไปหลัง หลังมาหน้า
    เช่น ป้อน "I saw he" ---> "he saw I"

    ความยากข้อนี้คือต้องเอาตัวอักษรมาจัดเป็นคำแล้วสลับที่ ซึ่งมันละบุตำแหน่งยากมาก
    แนวคิดของเราคือ ให้เช็คทุกตัวอักษร ถ้าเจอช่องว่าง = คำใหม่
    ถ้าไม่เจอช่องว่าง แสดงว่ายังเป็นคำเดียวกันอยู่
    ทำการลูปเช็คตัวอักษรจากข้างหลังมาหน้า หากเจอช่องว่าง แสดงว่าจบ 1 คำแล้ว
    จากนั้นพอได้คำออกมา 1 คำ จะเป็นชุดตัวอักษรที่กลับด้านกัน เพราะเราลูปเช็คจากหลังมาหน้า เช่น คำว่า "saw" จะกลายเป็น "was"
    ทีนี้เราก็แค่เอาคำที่ได้ออกมา ไปลูปสลับตัวอักษรหน้าหลัง ก็จะได้กลับมาเป็นคำเดิม "was" -> "saw"
    เราก็เอาคำที่ได้ออกมาไปเก็บไว้ในตัวแปร Result 
    ทีนี้ก็ทำวนไปเรื่อยๆ ก็จะได้คำที่เรียงจากหลังไปหน้า นั่นเอง
*/
int main()
{
	string text;
	string temp;
    char temp2;
    string result;

	getline(cin, text);

	for (int i = 0; i < text.length(); i++) {
        if (text[text.length() - i - 1] != ' ' || text.length() - i - 1 == 0 ) { 
            temp += text[text.length() - i - 1];
        }
        if (text[text.length() - i - 1] == ' ' || text.length() - i - 1 == 0) {
            for (int i = 0; i < temp.length() / 2; i++) {
                temp2 = temp[temp.length() - i - 1];
                temp[temp.length() - i - 1] = temp[i];
                temp[i] = temp2;
            }
            result += temp;
            temp.clear();
            if(text[text.length() - i - 1] == ' ') {
                result += ' ';
            }
        }
        // cout << temp << " ";
	}
    cout << result;
}
