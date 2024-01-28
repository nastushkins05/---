#include <iostream>

bool checkColumn(int** matrix, int rows, int col) {
   for (int i = 1; i < rows; i++) {
       if (matrix[i][col] < matrix[i - 1][col]) {
           return false;
       }
   }
   return true;
}

void createArrayB(int** matrix, int rows, int cols, int * B) {
   for (int i = 0; i < cols; i++) {
       if (checkColumn(matrix, rows, i)) {
           B[i] = 1;
       } else {
           B[i] = 0;
       }
   }
}

int main() {
   const int rows = 5;
    const int cols = 5;

   srand(time(NULL));
   int A[3][3];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = (rand() % 10) - (rand() % 10);
            std::cout << A[i][j]<<"\t";
        }
    }

   // Создание массива B
   int* B = new int[cols];
   createArrayB(A, rows, cols, B);

   // Вывод массива B
   for (int i = 0; i < cols; i++) {
       std::cout << B[i] << " ";
   }

   return 0;
}
