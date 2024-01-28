#include <iostream>
using namespace std;
const int MAX_ROWS = 100; 
const int MAX_COLS = 100; 

void checkColumn(int column, int A[MAX_ROWS][MAX_COLS], int rows, int& result) {
    result = 1; // Предполагаем, что все элементы в столбце удовлетворяют условию
    
    for (int i = 0; i < rows; i++) {
        if (A[i][column] <= 0 || A[i][column] % 2 == 0) {
            result = 0;
            break;
        }
    }
}

int main() {
    int rows, cols;
    int A[MAX_ROWS][MAX_COLS];
    int result[MAX_COLS];
    
    cout << "Введите количество строк в матрице: ";
    cin >> rows;
    cout << "Введите количество столбцов в матрице: ";
    cin >> cols;
   
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    
    for (int j = 0; j < cols; j++) {
        int checkResult;
        checkColumn(j, A, rows, checkResult);
        result[j] = checkResult;
    }
    
    cout << "Массив B:\n";
    for (int j = 0; j < cols; j++) {
        cout << "B[" << j << "]: " << result[j] << "\n";
    }
    
    return 0;
}
