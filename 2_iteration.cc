#include <map>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main() {
  map<int, int> mapa;
  mapa[47] = 5;
  mapa[1] = 3;
  mapa[20] = 4;

  //cout << mapa[20] << endl;
  //map<vector<int>, vector<pair<int, int>>> skareda;
  for (map<int, int>::iterator it = mapa.begin();
       it != mapa.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
  cout << endl;

  for (decltype(mapa.begin()) it2 = mapa.begin();
       it2 != mapa.end(); ++it2) {
    cout << it2->first << " " << it2->second << endl;
  }

  cout << endl;

  for (auto it3 = mapa.begin(); it3 != mapa.end(); ++it3) {
    cout << it3->first << " " << it3->second << endl;
  }

  cout << endl;
  // element uz nie je pointer, ale obycajny pair
  for (pair<int, int> element: mapa) {
    cout << element.first << " " << element.second << endl;
  }

  cout << endl;
  for (auto element: mapa) {
    cout << element.first << " " << element.second << endl;
  }

  // toto iste funguje aj pre set, vector, ...
  vector<int> v;
  v.push_back(2);
  v.push_back(7);
  v.push_back(19);

  /*
     for (size_t i = 0; i < v.size(); i++) {
       cout << v[i] << endl;
     }
  */
  for (auto prvok: v) {
    cout << prvok << endl;
  }

  set<int> s;
  s.insert(5);
  s.insert(20);
  s.insert(-17);
  cout << "set:" << endl;
  for (auto prvok: s) {
    cout << prvok << endl;
  }

  int aaa = 47;
  int bbb = 23;
  auto ccc = aaa + bbb;
  cout << ccc << endl;
}
