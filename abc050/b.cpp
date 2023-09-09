#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int k, s, ans=0;
  cin >> k >> s;
  for(int i = 0; i <= k; ++i) {
    for(int j = 0; j <= k; j++) {
      int z = s - j - i;
      if (z >= 0 && z <= k) ans++;
    }
  }
  cout << ans << endl;
}