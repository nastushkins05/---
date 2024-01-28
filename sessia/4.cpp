
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

// Функция для проверки условия в заданном столбце матрицы
bool checkColumn(int A[][MAX_SIZE], int rows, int col) {
    for (int i = 0; i < rows; i++) {
        if (A[i][col] <= 0 || A[i][col] % 2 == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int A[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    // Ввод элементов матрицы
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Матрица[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int b[MAX_SIZE];
    int bSize = 0;

    // Формирование одномерного массива B
    for (int j = 0; j < cols; j++) {
        if (checkColumn(A, rows, j)) {
            b[bSize] = j;
            bSize++;
        }
    }

    // Вывод массива B
    cout << "Массив B: ";
    for (int i = 0; i < bSize; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
