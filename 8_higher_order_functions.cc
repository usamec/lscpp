#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

void vypis(vector<pair<int, int>> cisla) {
  for (auto e: cisla) {
    cout << "(" << e.first << ", " << e.second << ")" << " ";
  }
  cout << endl;
}

int main() {
  vector<pair<int, int>> vec{{1,2}, {1,3}, {4, 7}, {10, 5}};

  vypis(vec);

/*  for (auto &e: vec) {
    e.first += e.second;  // e.first = e.first + e.second;
  }

  vypis(vec);*/

  // transform sa aplikuje na kazdy prvok nezavisle
  transform(vec.begin(), vec.end(), vec.begin(), [](auto e) {
      e.first += e.second;
      return e;
  });

  vypis(vec);

  // mozeme transform poslat aj inde, ale treba najprv pripravit vystup na vhodnu velkost
  vector<pair<int, int>> vystup(vec.size());
  transform(vec.begin(), vec.end(), vystup.begin(), [](auto e) {
      e.first -= e.second;
      return e;
  });

  vypis(vystup);
  vypis(vec);

  vector<int> cisla {23, 42, 47, 55};

  /*int sucet = 0;
  for (auto e: cisla) {
    sucet = sucet + e;
  }*/
  int sucet = accumulate(cisla.begin(), cisla.end(), 0);
  cout << sucet << endl;

  pair<int, int> mm = make_pair(-123456789, 123456789);
  for (auto e: cisla) {
    mm = make_pair(max(mm.first, e), min(mm.second, e));
  }


  pair<int, int> maxmin = accumulate(cisla.begin(), cisla.end(), make_pair(-123456789, 123456789), [](auto a, auto b) {
      return make_pair(max(a.first, b), min(a.second, b));
  });
  cout << maxmin.first << " " << maxmin.second << endl;
}
