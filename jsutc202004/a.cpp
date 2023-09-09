#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int s, l, r;
  cin >> s >> l >> r;

  while(s < l || s > r) {
    if(s < l) ++s;
    if(s > r) --s;
  }
  cout << s << endl;
  return 0;
}