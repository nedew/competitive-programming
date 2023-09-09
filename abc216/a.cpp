#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string str, x;
  int y;
  cin >> str;

  rep(i, str.length()) {
    if(str.at(i) == '.') {
      x = str.substr(0, i);
      y = stoi(str.substr(i+1, str.length()-(i+1)));
      break;
    }
  }

  string ans;

  if(0 <= y && y <= 2) {
    ans = "-";
  } else if(3 <= y && y <= 6) {
    ans = "";
  } else if(7 <= y && y <= 9) {
    ans = "+";
  }

  cout << x+ans << endl;


  return 0;
}