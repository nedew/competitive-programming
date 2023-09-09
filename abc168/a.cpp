#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1000000007;

int main() {
  string n;
  cin >> n;
  int i = n[n.length() - 1];
  if(i == '2' || i == '4' || i == '5' || i == '7' || i == '9') {
    cout << "hon" << endl;
  } else if(i == '0' || i == '1' || i == '6' || i == '8') {
    cout << "pon" << endl;
  } else {
    cout << "bon" << endl;
  }

}