#include <iostream>
using namespace std;
// Подпрограмма для формирования массива B
void createArrayB(int** matrix, int rows, int cols, int* B, int& count) {
   count = 0;
   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < cols; j++) {
           if (matrix[i][j] > 0 && matrix[i][j] % 2 == 0) {
               B[count] = matrix[i][j];
               count++;
           }
       }
   }
}

int main() {
   const int rows = 5;
   const int cols = 5;

   // Создание матрицы
   int** A = new int*[rows];
   for (int i = 0; i < rows; i++) {
       A[i] = new int[cols];
       for (int j = 0; j < cols; j++) {
           A[i][j] = rand() % 10; 
           cout << A[i][j]<<"\t";
       }
       cout << endl;
   }

   int* B = new int[rows * cols];
   int count;
   createArrayB(A, rows, cols, B, count);

   double sum = 0;
   for (int i = 0; i < count; i++) {
       sum += B[i];
   }
   double average = sum / count;

   cout << "Среднее арифметическое: " << average << endl;


   return 0;
}
