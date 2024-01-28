#include <iostream>
using namespace std;
const int MAX_ROWS = 100; 
const int MAX_COLS = 100;

void formArr(int A[MAX_ROWS][MAX_COLS], int rows, int cols, int* resultArr, int& resultSize) {
    resultSize = 0; // Изначально размер массива равен 0
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] > 0 && A[i][j] % 2 != 0) {
                // Если элемент положительный и нечетный, добавляем его в массив
                resultArr[resultSize] = A[i][j];
                resultSize++;
            }
        }
    }
}

float calculateAverage(int* Arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Arr[i];
    }
    
    return (float)sum / (float)size;
}

int main() {
    int rows, cols;
    int A[MAX_ROWS][MAX_COLS];
    int resultArr[MAX_ROWS * MAX_COLS];
    int resultSize;
    
    cout << "Введите количество строк в массиве А: ";
    cin >> rows;
    cout << "Введите количество столбцов в массиве А: ";
    cin >> cols;
  
    cout << "Введите элементы массиве А\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    
    // Формирование массива B
    formArr(A, rows, cols, resultArr, resultSize);
    
    float average = calculateAverage(resultArr, resultSize);
  
    cout << "Массив B:\n";
    for (int i = 0; i < resultSize; i++) {
        cout << "B[" << i << "]: " << resultArr[i] << "\n";
    }
 
    cout << "Среднее арифметическое: " << average << "\n";
    
    return 0;
}

