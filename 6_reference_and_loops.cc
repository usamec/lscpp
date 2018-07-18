#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> vec{1,2,3,4,5,6};

  for (auto element: vec) {
    cout << element << " ";
  }
  cout << endl;

  for (auto element: vec) {
    element += 1;
  }

  for (auto element: vec) {
    cout << element << " ";
  }
  cout << endl;

  for (auto& element: vec) {
    element += 1;
  }

  for (auto element: vec) {
    cout << element << " ";
  }
  cout << endl;

  for (auto it = vec.begin(); it != vec.end(); ++it) {
    (*it) += 1;
  }

  for (auto element: vec) {
    cout << element << " ";
  }
  cout << endl;

}
