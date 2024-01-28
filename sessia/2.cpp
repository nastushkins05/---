#include <iostream>
using namespace std;
bool checkRow(int row[], int size) {
  for (int i = 0; i < size; i++) {
      if (row[i] <= 0 || row[i] % 2 != 0) {
          return false;
      }
  }
  return true;
}

int* createArrayB(int matrix[][5], int rows, int cols) {
  static int B[rows];
  int count = 0;
  for (int i = 0; i < rows; i++) {
      if (checkRow(matrix[i], cols)) {
          B[count] = i + 1;
          count++;
      }
  }
  return B;
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

  int* B = createArrayB(A, 5, 5);
  int count = sizeof(B) / sizeof(B[0]);
  for (int i = 0; i < count; i++) {
      std::cout << B[i] << " ";
  }

  return 0;
}
