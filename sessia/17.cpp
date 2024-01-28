#include <iostream>
using namespace std;
const int n = 5;
const int k = 5;
int calculatePositiveSum(int matrix[n][k], int rowIndex) {
  int sum = 0;
  for (int colIndex = 0; colIndex < k; colIndex++) {
      if (matrix[rowIndex][colIndex] > 0) {
          sum += matrix[rowIndex][colIndex];
      }
  }
  return sum;
}
int findMaxSumRow(int matrix[n][k]) {
  int maxSum = INT_MIN;
  int maxRowIndex = -1;
  for (int rowIndex = 0; rowIndex < n; rowIndex++) {
      int sum = calculatePositiveSum(matrix, rowIndex);
      if (sum > maxSum) {
          maxSum = sum;
          maxRowIndex = rowIndex;
      }
  }
  return maxRowIndex;
}
int main() {
  srand(time(NULL));
    int A[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = (rand() % 10);
            cout << A[i][j]<<"\t";
        }
        cout << endl;
    }
int B[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            B[i][j] = (rand() % 10);
            cout << B[i][j]<<"\t";
        }
        cout << endl;
    }

  

  int maxRowIndexA = findMaxSumRow(A);
  int maxRowIndexB = findMaxSumRow(B);

  cout << "Макс сумма полож элементов в строке A: " << maxRowIndexA << endl;
  cout << "Макс сумма полож элементов в строке B: " << maxRowIndexB << endl;

  return 0;
}
