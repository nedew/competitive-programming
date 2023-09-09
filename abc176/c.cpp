#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  ll a[n], ans = 0;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    if(i == 0) {
      continue;
    }

    if(a[i] < a[i-1]) {
      ans += (a[i-1] - a[i]);
      a[i] = a[i] + (a[i-1] - a[i]);
    }
  }

  cout << ans << endl;

  return 0;
}
