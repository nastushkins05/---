#include <iostream>
using namespace std;
// Функция для формирования одномерного массива из элементов матрицы
void formArray(int* matrix, int n, int* result, int& resultSize)
{
    resultSize = 0;
    for (int i = 0; i < n; i++)
    {
        result[resultSize] = matrix[i];
        resultSize++;
    }
}

int main()
{
   srand(time(NULL));
    int A[3][3], n = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = (rand() % 10) - (rand() % 10);
            cout << A[i][j]<<"\t";
        }
        cout << endl;
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i][i];
    }
    int average = sum / n;

    // Формирование одномерного массива B
    const int maxElements = n * n; // максимальное количество элементов в массиве B
    int B[maxElements];
    int BSize = 0;
    formArray((int*)A, n * n, B, BSize);

    // Вывод элементов массива B
    cout << "Массив B: ";
    for (int i = 0; i < BSize; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // Вывод среднего арифметического
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}