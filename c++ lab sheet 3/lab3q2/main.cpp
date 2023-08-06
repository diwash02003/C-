#include <iostream>

using namespace std;

class Complex {
  private:
    double real;
    double imag;
  public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
  Complex c1(10, 20), c2(30, 40);
  Complex c3 = c1 + c2;
  c3.display(); // Output should be 40 + 60i

  return 0;
}
