#include <iostream>
#include <set>
using namespace std;

set<int> s;

int main() {
  int t;
  cin >> t;
  while (t--) {
    s.clear();
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i <= n - 1; i++) {
      s.insert((n - 1 - i) * a + i * b);
    }
    for (auto it : s) {
      cout << it << " ";
    }
    cout << endl;
  }
  return 0;
}
