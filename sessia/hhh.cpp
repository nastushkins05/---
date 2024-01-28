#include <iostream>
using namespace std;
const int n = 4;
const int m = 4;

// Функция для подсчета количества и произведения отрицательных элементов в матрице
void ccountAndMultiplyNegatives(int matrix[n][m], int &count, int &product) {
  count = 0;
  product = 1;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if (matrix[i][j] < 0) {
              count++;
              product *= matrix[i][j];
          }
      }
  }
}


int main() {

   srand(time(NULL));
   int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = (rand() % 10) - (rand() % 10);
            cout << matrix[i][j]<<"\t";
        }
        cout << endl;
    }

  int halfn = n / 2;

  int countTop, productTop, countBottom, productBottom;
  countAndMultiplyNegatives(matrix, countTop, productTop);
  countAndMultiplyNegatives(matrix + halfn, countBottom, productBottom);

  if (countTop == countBottom) {
      cout << "Both halves have " << countTop << " negative elements with product " << productTop * productBottom << endl;
  } else if (countTop < countBottom) {
      cout << "Top half has fewer negative elements (" << countTop << ") with product " << productTop << endl;
  } else {
      cout << "Bottom half has fewer negative elements (" << countBottom << ") with product " << productBottom << endl;
  }

  return 0;
}
