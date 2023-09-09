#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  int a, b;
  cin >> a >> b;

  if(a + b >= 10) {
    cout << "error" << endl;
  } else {
    cout << a + b << endl;
  }

  return 0;
}