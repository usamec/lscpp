#include <vector>
#include <set>
#include <map>
#include <iostream>

using namespace std;

int main() {
  vector<int> a;
  a.push_back(2);
  a.push_back(3);

  vector<int> b{2, 3, 4};
  for (auto prvok: b) {
    cout << prvok << endl;
  }

  cout << endl;

  set<int> s{47, 42, 23, 15, 200};
  for (auto prvok: s) {
    cout << prvok << endl;
  }

  cout << endl;
  map<int, int> m{{2, 5}, {3, 6}, {17, 23}};
  for (auto prvok: m) {
    cout << prvok.first << " " << prvok.second << endl;
  }
}
