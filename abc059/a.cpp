#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  string str(s1.substr(0, 1) + s2.substr(0, 1) + s3.substr(0, 1));
  transform(str.begin(), str.end(), str.begin(), ::toupper);

  cout << str << endl;
  return 0;
}
