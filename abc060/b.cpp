#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  if(a[a.length()-1] == b[0] && b[b.length()-1] == c[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
