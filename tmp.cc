int main() {
  vector<int> a;
  vector<pair<int, int>> b;
  for (size_t i = 0; i < a.size(); i++) {
    auto element = a[i];
    b.push_back(make_pair(a[i], i));
  }

  for (auto it = a.begin(); it != a.end(); ++it) {
    auto element = *it;
  }

  for (auto element: a) {
  }
}
