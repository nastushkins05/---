#include <iostream>
using namespace std;
// Функция для проверки, отсортирован ли массив
bool isSorted(int arr[], int n) {
  if (n == 1 || n == 0)
      return true;
  if (arr[n - 1] < arr[n - 2])
      return false;
  return isSorted(arr, n - 1);
}

// Подпрограмма для формирования массива B
void createArrayB(int** matrix, int rows, int cols, int* B, int& count) {
  count = 0;
  for (int i = 0; i < rows; i++) {
      if (isSorted(matrix[i], cols)) {
          B[count] = matrix[i][0];
          count++;
      }
  }
}

int main() {
  const int rows = 5;
  const int cols = 5;

  int** A = new int*[rows];
   for (int i = 0; i < rows; i++) {
       A[i] = new int[cols];
       for (int j = 0; j < cols; j++) {
           A[i][j] = rand() % 10; 
           cout << A[i][j]<<"\t";
       }
       cout << endl;
   }

  // Создание массива B
  int* B = new int[rows];
  int count;
  createArrayB(A, rows, cols, B, count);

  for (int i = 0; i < count; i++) {
      cout << B[i] << " ";
  }


  return 0;
}
