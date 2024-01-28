#include <iostream>
using namespace std;
void swapRows(int matrix[5][5], int row1, int row2) {
   for (int j = 0; j < 5; j++) {
       int temp = matrix[row1][j];
       matrix[row1][j] = matrix[row2][j];
       matrix[row2][j] = temp;
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
    srand(time(NULL));
    int B[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            B[i][j] = (rand() % 10) - (rand() % 10);
            cout << B[i][j]<<"\t";
        }
        cout << endl;
    }

   swapRows(A, 0, 4); // обмен строки 0 и последней в матрице A
   swapRows(B, 0, 3); // обмен строки 0 и предпоследней в матрице B

   return 0;
}
