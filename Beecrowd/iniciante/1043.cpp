#include <bits/stdc++.h>

using namespace std;

int main(){

  float a, b, c;
  cin >> a >> b >> c;

  cout << fixed;
  cout.precision(1);
  if(a < (b+c) && b < (a+c) && c < (a+b)) cout << "Perimetro = " << a + b + c << endl;
  else cout << "Area = " << ((a + b) * c) / 2 << endl;

  return 0;
}