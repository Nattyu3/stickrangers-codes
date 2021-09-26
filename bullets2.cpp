#include <bits/extc++.h>
using namespace std;

int main() {
  int a;
  cout << "loops : ";
  cin >> a;
  while (a--) {
    int n;
    cout << "input num of bullets : ";
    cin >> n;
    int l5 = n + 6;
    int l7 = n * 5 / 2;
    if (l5 < l7)  cout << "Lv.7 : " << l7 << endl;
    if (l5 == l7) cout << "same : " << l7 << endl;
    if (l5 > l7)  cout << "Lv.5 : " << l5 << endl;
    cout << endl;
  }
  return 0;
}
