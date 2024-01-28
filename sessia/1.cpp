#include <iostream>
using namespace std;
// Функция для проверки наличия положительных четных элементов в заданной строке матрицы
bool hasPositiveEvenElements(int* row, int size) {
    for (int i = 0; i < size; i++) {
        if (row[i] > 0 && row[i] % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    // Задаем размеры матрицы A
    const int rows = 3;
    const int cols = 3;

   srand(time(NULL));
   int A[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = (rand() % 10) - (rand() % 10);
            cout << A[i][j]<<"\t";
        }
        cout << endl;
    }

    // Формируем одномерный массив B
    int B[rows];
    for (int i = 0; i < rows; i++) {
        if (hasPositiveEvenElements(A[i], cols)) {
            B[i] = 1;
        } else {
            B[i] = 0;
        }
    }

    // Выводим матрицу B
    cout << "Массив B: ";
    for (int i = 0; i < rows; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
