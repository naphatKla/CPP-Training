#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*โจทย์ 4 ดาว ยาก
     ให้ใส่ค่า m และ n แล้วไป plot matrix โดยต้อง Scaled 0-1 ก่อน เช่น 
     2 (m)
     2 (n)
     a
     b
     c
     d
     output >>>
     a b
     c d
*/
// สมการ Scaled 0-1 metrix คือ (x - min) / (max - min)

//หาค่า min ใน vector
float min(vector<float> matrix) {
    float min = matrix[0];
    for(int i = 0; i< matrix.size(); i++) {
        if(min > matrix[i]) {
            min = matrix[i];
        }
    }
    return min;
}

//หาค่า max ใน vector
float max(vector<float> matrix) {
    float max = matrix[0];
    for(int i = 0; i< matrix.size(); i++) {
        if(max < matrix[i]) {
            max = matrix[i];
        }
    }
    return max;
}

// scaled 0-1 ให้กับเมตริก หรือ vector ที่ต้องการ
vector<float> scaleMatrix01(vector<float> matrix) {
    float Max = max(matrix);
    float Min = min(matrix);
    for(int i = 0; i < matrix.size(); i++) {
        matrix[i] = (matrix[i] - Min) / (Max - Min);
    }
    return matrix;
}

// รับค่าเข้าไปเก็บใน matrix หรือ vector
vector<float> inputElement(int matrixSize, vector<float> matrix) {
    for(int i = 0; i < matrixSize; i++) {
        cin >> matrix[i];
    }
    return matrix;
}

// แสดงค่าใน vector ทั้งหมด
void printElement(vector<float> matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        cout << matrix[i] << " ";
    }
}

// นำค่ามาเรียงเป็นตาราง matrix
void printMatrixTable(vector<float> matrix, int mcolums, int nrows) {
    int position = 0;
    for(int n = 1; n <= nrows; n++) {
        for(int m = 1; m <= mcolums; m++) {
            printf("%.4f",matrix[position]);
            cout << " ";
            position++;
        }
        cout << endl;
    }
}


int main() {
    int mcolums, nrows;
    int matrixSize;
    float input;

    cin >> mcolums >> nrows;
    matrixSize = mcolums * nrows; // ขนาด = แถว * คอลัมป์
    vector<float> matrix(matrixSize);
    matrix = inputElement(matrixSize, matrix);
    matrix = scaleMatrix01(matrix);
    // printElement(matrix);
    printMatrixTable(matrix, mcolums, nrows);
}