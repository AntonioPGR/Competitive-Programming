#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;

  string str;
  switch (n){
    case 1: str = "January";
      break;
    case 2: str = "February";
      break;
    case 3: str = "March";
      break;
    case 4: str = "April";
      break;
    case 5: str = "May";
      break;
    case 6: str = "June";
      break;
    case 7: str = "July";
      break;
    case 8: str = "August";
      break;
    case 9: str = "September";
      break;
    case 10: str = "October";
      break;
    case 11: str = "November";
      break;
    case 12: str = "December";
      break;
  }

  cout << str << endl;

  return 0;
}