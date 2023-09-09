#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n,
      x = 0,
      ans = 0;
  string s;
  cin >> n >> s;
  for(int i = 0; i < n; i++) {
    x = s[i] == 'I' ? ++x : --x;
    if(x > ans) ans = x;
  }

  cout << ans << endl;
}