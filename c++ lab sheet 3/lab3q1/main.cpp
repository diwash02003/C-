#include <iostream>

using namespace std;

class Number {
  private:
    int num;
  public:
    Number(int n = 0) {
        num = n;
    }

    // Overloading the prefix increment operator
    Number operator++ () {
        num = num + 1;
        return Number(num);
    }

    // Overloading the prefix decrement operator
    Number operator-- () {
        num = num - 1;
        return Number(num);
    }

    void display() {
        cout << "Number: " << num << endl;
    }
};

int main() {
  Number n1(10);
  ++n1; // incrementing the number using prefix increment operator
  n1.display(); // Output should be 11

  --n1; // decrementing the number using prefix decrement operator
  n1.display(); // Output should be 10

  return 0;
}
