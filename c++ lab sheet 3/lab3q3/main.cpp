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

    friend Complex operator+ (Complex const &, Complex const &);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+ (Complex const &c1, Complex const &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
  Complex c1(3, 5), c2(2, 4);
  Complex c3 = c1 + c2;
  c3.display(); // Output should be 5 + 9i

  return 0;
}
