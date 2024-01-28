#include <iostream>
using namespace std;

int findMinIndex(int row[], int size) {
 int minIndex = 0;
 for (int i = 1; i < size; i++) {
     if (row[i] < row[minIndex]) {
         minIndex = i;
     }
 }
 return minIndex;
}

void swapElements(int matrix[][5], int row1, int col1, int row2, int col2) {
 int temp = matrix[row1][col1];
 matrix[row1][col1] = matrix[row2][col2];
 matrix[row2][col2] = temp;
}

void printMatrix(int matrix[][5], int rows, int cols) {
 for (int i = 0; i < rows; i++) {
   for (int j = 0; j < cols; j++) {
     cout << matrix[i][j] << " ";
   }
   cout << endl;
 }
}

int main() {
 srand(time(NULL));
    int A[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = (rand() % 10) - (rand() % 10);
            cout << A[i][j]<<"\t";
        }
        cout << endl;
    }

 cout << "Матрица до обмена:" << endl;
 printMatrix(A, 5, 5);

 if (A[0][findMinIndex(A[0], 5)] == A[4][findMinIndex(A[4], 5)]) {
     cout << "Нельзя выполнить замену." << endl;
 } else {
     swapElements(A, 0, findMinIndex(A[0], 5), 4, findMinIndex(A[4], 5));
 }

 cout << "Матрица после обмена:" << endl;
 printMatrix(A, 5, 5);

 return 0;
}
