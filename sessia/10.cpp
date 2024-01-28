#include <iostream>
using namespace std;
// Функция для проверки упорядоченности строки матрицы
bool isColsOrdered(int* cols, int size) {
    for (int i = 1; i < size; ++i) {
        if (cols[i] < cols[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    // Входная матрица A
    int A[rows][cols];

    cout << "Введите элементы  A:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int B[rows];
    int bIndex = 0; 
    //используется для отслеживания индекса, на котором будет размещаться следующий элемент в массиве B. 
    //Начальное значение 0 указывает, что массив B пока пустой и следующий элемент будет добавлен на позицию с индексом 0.
    //В цикле, когда мы находим максимальный элемент строки и хотим добавить его в массив B, 
    //мы используем bIndex для определения правильной позиции для добавления элемента. 
    //После добавления элемента, мы увеличиваем значение bIndex на 1, 
    //чтобы указать, что следующий элемент будет добавлен в следующую доступную позицию массива B.


    // Проходим по каждому столбу матрицы A
    for (int i = 0; i < cols; ++i) {
        // Проверяем упорядоченность столба
        if (isColsOrdered(A[i], rows)) {
            // Находим максимальный элемент строки
            int minElement = A[i][0];
            for (int j = 1; j < rows; ++j) {
                if (A[i][j] < minElement) {
                    minElement = A[i][j];
                }
            }
            // Добавляем максимальный элемент в массив B
            B[bIndex] = minElement;
            bIndex++;
        }
    }

    cout << "Массив B: ";
    for (int i = 0; i < bIndex; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
