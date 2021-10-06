#include <iostream>

int main() {
  using namespace std;

  int LV;
  cout << "input Lv : ";
  cin >> LV;

  int MO;
  cout << "input $$ : ";
  cin >> MO;

  int lv = 0, mo = 0;
  while (true) {
    if (MO / 10 >= LV * 10 && MO >= MO / 10) {
      MO -= MO / 10;
      mo++;
    }
    else if (MO / 10 < LV * 10 && MO >= LV * 10) {
      MO -= LV * 10;
      lv++;
    }
    else {
      break;
    }
  }

  cout << "--------result--------" << endl;
  printf("REVtimes : %d (Lv : %d, $$ : %d)", lv + mo, lv, mo);
  cout << endl;
  cout << "Remain $ : " << MO << endl;

  return 0;
}
