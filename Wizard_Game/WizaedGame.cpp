#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;

void lineCreate(char line, int line_time) // function ปริ้นเส้นตามจำนวนที่ป้อน 
{                                         // parameter (ชิ้นเส้น, จำนวนเส้น)
    for(int i = 0; i < line_time; i++) {
        cout << line;
    }
}

void titleCreate(string title, char line, int line_time) // fuction สร้างหัวข้อ
{                                                       // parameter (หัวข้อ, ชิ้นเส้น, จำนวนเส้น)
    lineCreate(line, line_time);
    cout << " " << title << " ";
    lineCreate(line, line_time);
    cout << endl << endl;
}

int integer_validation(string text) // function รับข้อมูล แล้วลูปจนกว่าจะป้อนจำนวนเต็มเข้ามา
{                                   // parameter (คำที่จะแสดง)
    string input;
    string temp;
    int result;
    bool check;

    while(true) {
        check = true;
        cout << text;
        cin >> input;

        for(int i = 0; i < input.length(); i++) { // check input ว่าเป็นตัวเลขทุกตัวไหม
            if(input[i] <= '9' && input[i] >= '0') {
                temp += input[i];
            }
            else {
                check = false;
                cout << " Invalid Input! Please enter an integer number. Please try again!\n\n";
                break;
            }
        }

        if(check) {
            return result = stoi(temp); // stoi คือแปลง string -> integer
        }
    }
}

void PressEnter() { // ลูปรับปุ่ม จนกว่า user จะกด enter
    cout << " Press Enter to continue guessing number ...";
    while(getch() != 13) {  // 13 คือ id ของปุ่ม enter ได้มาจากการ cout << getch(); มันจะแสดง id ของปุ่มที่เรากดออกมา
        cout << "\n Press Enter to continue guessing number ...";
    }
}

string answer_validation(string text) { // function กรองคำตอบของ user ให้เป็น 1 ตัวอักษรและ non-case-sensitive
    string answer;                      // และที่ใช้เป็น string เพราะครอบคลุมคำตอบ user มากกว่า char
    while(true) {
        cout << text;
        cin >> answer;
        if(answer.length() == 1) {
            answer = tolower(answer[0]);
            return answer;
        }
        else {
            cout << " Answer is not correct!!!\n";
        }
    }
}

int main() {
    int max, min;
    int guessing_num;
    string answer;
    bool restartGame;
    while(restartGame) {
        titleCreate("Wizard_Game",'=',20);
        min = integer_validation(" Enter minimum number to guess: ");
        max = integer_validation(" Enter maximum number to guess: ");
        
        while(max < min) { // ถ้า max น้อยกว่า min ให้มาวนลูปใส่ค่าใหม่
            cout << " Max must more than min !!!\n\n";
            min = integer_validation(" Enter minimum number to guess: ");
            max = integer_validation(" Enter maximum number to guess: ");
        }

        cout << " *pick a number between " << min << " and " << max << " and keep in your mind...*\n";
        PressEnter();
        cout << endl << endl;
        titleCreate("Start Number Guessing",'.',5);
        cout << endl << endl;

        for(int i = 1; answer != "c"; i++) { // ลูปทายตัวเลข
            guessing_num = (min + max) / 2;
            cout << " Round " << i << ": Guessing Number is " << guessing_num << endl;
            cout << " Is your number Higher or Lower than " << guessing_num << "?\n";

            while(true) { // ลูปรับค่า จาก user หากป้อนคำตอบผิด
                answer = answer_validation(" Enter 'h' for higher, 'l' for lower, and 'c' for correct guessing number: ");

                if(answer == "l") {
                    max = guessing_num;
                    cout << " =Opps, my guess is too high.\n\n";
                    break;
                }
                else if(answer == "h") {
                    min = guessing_num;
                    cout << " =Aww, my guess is too low.\n\n";
                    break;
                }
                else if(answer == "c") {
                    cout << " *Hooray, my guess is correct!...Yes!\n";
                    cout << " It took " << i << " rounds to get the correct answer.\n\n";
                    break;
                }
                else {
                    cout << " Answer is not correct!!!\n";
                }
            }
        }
        
        while(true) {
            answer = answer_validation(" Do you want to play again [y/n]?\n ");
            if(answer == "y") {
                restartGame = true;
            }
            else if(answer == "n") {
                restartGame = false;
            } 
            else  {
                cout << " Answer is not correct!!!\n";
            }
        }
    }
}