#include <iostream>
using namespace std;
// Функция для проверки наличия положительных четных элементов в заданной строке матрицы
bool hasNegativeOddElements(int* cols, int size) {
    for (int j = 0; j < size; j++) {
        if (cols[j] < 0 & cols[j] % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
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
    int B[cols];
    for (int j = 0; j < cols; j++) {
        if (hasNegativeOddElements(A[j], rows)) {
            B[j] = 1;
        } else {
            B[j] = 0;
        }
    }

    cout << "Массив B: ";
    for (int j = 0; j < cols; j++) {
        cout << B[j] << " ";
    }
    cout << endl;

    return 0;
}
