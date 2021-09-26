#include <bits/extc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  for (int i = 0; i <= 7; i++) {
    if (i == 0) {
      cout << "NONE : ";
      for(int j = m; j <= n; j++) printf("%02d ",j);
      cout << endl;
    }
    if (i == 1) { // +1
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j + 1);
    }
    if (i == 2) { // +2
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j + 2);
    }
    if (i == 3) { // 75%
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j * 7 / 4);
    }
    if (i == 4) { // 100%
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j * 2);
    }
    if (i == 5) { // +6
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j + 6);
    }
    if (i == 6) { // 125%
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j * 9 / 4);
    }
    if (i == 7) { // 150%
      cout << "Lv." << i << " : ";
      for(int j = m; j <= n; j++) printf("%02d ",j * 5 / 2);
    }
    cout << endl;
  }
  return 0;
}
