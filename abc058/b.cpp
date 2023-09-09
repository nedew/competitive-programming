#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string o, e;
  cin >> o >> e;

  string ans;

  rep(i, o.length()) {
    ans += o[i];
    if(e[i]) {
      ans += e[i];
    }
  }

  cout << ans << endl;
  return 0;
}
