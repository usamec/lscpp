#include <set>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  set<int> s;
  for (int i = 0; i < 2; i++) {
    s.insert(i * 23);
  }

  for (int i = 0; i < 3; i++) {
    s.insert(rand()%1000000);
  }

  for (auto e: s) {
    cout << e << endl;
  }

  cout << s.count(23) << endl;
  cout << s.count(22) << endl;

  s.erase(23);
  cout << s.count(23) << endl;

  cout << "iteracia" << endl;
  // set<int>::iterator it = s.begin();
  auto it = s.begin();
  cout << *it << " " << (it == s.end()) << endl;
  ++it;
  cout << *it << " " << (it == s.end()) << endl;
  ++it;
  cout << *it << " " << (it == s.end()) << endl;
  ++it;
  cout << *it << " " << (it == s.end()) << endl;
  --it;
  cout << *it << " " << (it == s.end()) << endl;
  ++it;
  cout << *it << " " << (it == s.end()) << endl;
  ++it;
  cout << *it << " " << (it == s.end()) << endl;

  int a = 47;
  int b = a++;
  int bb = a;
  a += 1;
  int c = ++a;
  a += 1;
  int cc = a;
}
