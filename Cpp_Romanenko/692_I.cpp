#include <iostream>
#include <vector>
using namespace std;

vector<vector<double> > create_matrix(int n) { 
 
 vector<vector<double> > matrix; 
 cout << "Начало заполнения матрица" << endl; 
 for (int i{ 0 }; i < n; i++) { 
  vector<double> row; 
  for (int j{ 0 }; j < n; j++) { 
   int value; 
   cout << "Значение (" << i << "," << j << "): "; 
   cin >> value; 
 
   row.push_back(value); 
  } 
   
  matrix.push_back(row); 
 } 
 
 return matrix; 
}

double define_max_value(vector<vector<double>> matrix) { 
 
 int rows = matrix.size(); 
 int max_value = pow(-10, 11); 
 
 for (int i{ 0 }; i < rows; i++) { 
  for (int j{ rows - 1 - i }; j >= 0; j--) { 
   double value = matrix[i][j]; 
   if (value > max_value) { 
    max_value = value; 
   } 
  } 
 } 
 
 return max_value; 
}

int main()
{
    cout << "Введите значение порядка матрицы: "; 
    int n;
    cin >> n;
    vector<vector<double>> matrix = create_matrix(n);
    cout << "Максимальное значение матрицы = " << define_max_value(matrix);

}