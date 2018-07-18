#include <iostream>

using namespace std;

void f1(int a) {
  a += 1;
  cout << "som v f1 a premmena a je " << a << endl;
}

void f2(int& a) {
  a += 1;
  cout << "som v f2 a premmena a je " << a << endl;
}

int main() {
  int x = 42;
  cout << "pred f1 " << x << endl;
  f1(x);
  cout << "po f1 a pred f2 " << x << endl;
  f2(x);
  cout << "po f2 " << x << endl;
}
