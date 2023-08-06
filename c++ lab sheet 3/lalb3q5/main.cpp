#include <iostream>

using namespace std;

class Matrix {
  private:
    int mat[3][3];
  public:
    Matrix() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                mat[i][j] = 0;
            }
        }
    }

    Matrix operator+ (Matrix &m) {
        Matrix res;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                res.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return res;
    }

    void setValues(int values[][3]) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                mat[i][j] = values[i][j];
            }
        }
    }

    void display() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
  int values1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int values2[][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  Matrix m1, m2;
  m1.setValues(values1);
  m2.setValues(values2);
  cout << "Matrix 1: " << endl;
  m1.display();
  cout << "Matrix 2: " << endl;
  m2.display();
  Matrix m3 = m1 + m2;
  cout << "Sum of Matrix 1 and Matrix 2: " << endl;
  m3.display();

  return 0;
}
