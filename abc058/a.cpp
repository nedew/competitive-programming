#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string a, b;
  cin >> a >> b;

  string result;

  if(a == b) {
    result = "EQUAL";
  } else if(a.length() > b.length()) {
    result = "GREATER";
  } else if(b.length() > a.length()) {
    result = "LESS";
  } else {
    for(int i = 0; i < a.length(); i++) {
      int A = stoi(a.substr(i, 1));
      int B = stoi(b.substr(i, 1));

      if(A > B) {
        result = "GREATER";
        break;
      } else if(B > A) {
        result = "LESS";
        break;
      }
    }
  }

  cout << result << endl;
  return 0;
}
