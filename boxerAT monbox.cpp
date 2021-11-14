#include <bits/extc++.h>

int main(){
  using namespace std;

  const int AT = 10;
  int at = -1;

  int max_Lv;
  cout << "input max LV : ";
  cin >> max_Lv;
  cout << endl;

  for(int a = 0; a <= max_Lv; a++){
    int b = max_Lv - a;
    at = max(at, (AT + a*10) * b*5 / 100);
  }

  for(int a = 0; a <= max_Lv; a++){
    int b = max_Lv - a;
    if(at == (AT + a*10) * b*5 / 100){
      cout << "AT+= : " << a << endl;
      cout << "AT*= : " << b << endl;
      cout << "AT   : " << at << endl;
      cout << endl;
    }
  }

  return 0;
}
