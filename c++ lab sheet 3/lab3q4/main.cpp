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

    Matrix operator- () {
        Matrix res;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                res.mat[i][j] = -mat[i][j];
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
  int values[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  Matrix m1;
  m1.setValues(values);
  cout << "Matrix before negation: " << endl;
  m1.display();
  Matrix m2 = -m1;
  cout << "Matrix after negation: " << endl;
  m2.display();

  return 0;
}
