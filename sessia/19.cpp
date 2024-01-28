#include <iostream>
using namespace std;
bool checkRow(int* row, int size, int diagonal) {
   for (int i = 0; i < size; i++) {
       if (row[i] > diagonal) {
           return true;
       }
   }
   return false;
}

void createArrayB(int** A, int rows, int cols, int* B) {
   for (int i = 0; i < rows; i++) {
       if (checkRow(A[i], cols, A[i][i])) {
           B[i] = 1;
       } else {
           B[i] = 0;
       }
   }
}

int main() {
   const int rows = 3;
    const int cols = 3;

   srand(time(NULL));
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
   createArrayB(A, rows, cols, B);

   // Вывод массива B
   for (int i = 0; i < rows; i++) {
       cout << B[i] << " ";
   }

}
