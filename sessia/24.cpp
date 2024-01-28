#include <iostream>
using namespace std;

// Функция для вычисления количества нулевых элементов и среднего арифметического остальных элементов
void calculate(int matrix[5][5], int start, int end, int& zeroCount, double& avg) {
  int sum = 0;
  int count = 0;
  for (int i = start; i <= end; i++) {
      for (int j = 0; j < 5; j++) {
          if (matrix[i][j] == 0) {
              zeroCount++;
          } else {
              sum += matrix[i][j];
              count++;
          }
      }
  }
  if (count != 0) {
      avg = static_cast<double>(sum) / count;
  }
}

int main() {
  // Ввод матрицы
  int matrix[5][5];
  cout << "Enter elements:" << endl;
  for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
          cin >> matrix[i][j];
      }
  }

  int zeroCountLeft = 0, zeroCountRight = 0;
  double avgLeft = 0, avgRight = 0;

  calculate(matrix, 0, 2, zeroCountLeft, avgLeft);

  calculate(matrix, 3, 4, zeroCountRight, avgRight);

  cout << "Zero count left: " << zeroCountLeft << ", average left: " << avgLeft << endl;
  cout << "Zero count right: " << zeroCountRight << ", average right: " << avgRight << endl;

  return 0;
}
