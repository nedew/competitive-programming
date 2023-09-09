#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;

int main() {
  string s;
  cin >> s;
  int start = s.find("A"),
      end   = s.rfind("Z");

  cout << (end + 1) - start << endl;
}