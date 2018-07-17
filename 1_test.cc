#include <cstdio>
#include <vector>

using namespace std;

namespace abcdef {
  int func(int a) {
    return a + 1;
  }
}
using abcdef::func;

int main() {
  func(42);

  printf("Hello world\n");
  vector<int> a;
  a.push_back(47);
  for (int b: a) {
  }
}
