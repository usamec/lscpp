#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void vypis(vector<pair<int, int>> cisla) {
  for (auto e: cisla) {
    cout << "(" << e.first << ", " << e.second << ")" << " ";
  }
  cout << endl;
}

bool porovnavadlo(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main() {
  vector<pair<int, int>> cisla{{4, 7}, {1, 2}, {10, 5}, {1, 3}};

  vypis(cisla);

  sort(cisla.begin(), cisla.end());
  vypis(cisla);

  // triedenie opacnym smerom
  // rbegin - ukazuje na opacny zaciatok, t.j. koniec
  // rend - ukazuje na opacny koniec, t.j. jeden prvok pred zaciatok
  // (rbegin, rend) ma opacny smer ako normalny iterator
  sort(cisla.rbegin(), cisla.rend());
  vypis(cisla);

//  sort(cisla.begin(), cisla.end(), porovnavadlo);
//  vypis(cisla);

/*  sort(cisla.begin(), cisla.end(), [](pair<int, int> a, pair<int, int> b) {
      return a.second < b.second;
  });*/

  sort(cisla.begin(), cisla.end(), [](auto a, auto b) {
      return a.second < b.second;
  });

  vypis(cisla);
}

