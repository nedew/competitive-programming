#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef vector<int> vec1;
typedef vector<string> vec2;
typedef vector<double> vec3;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vec1 players(n, k);

  int a;
  while(cin >> a) {
    players.at(a-1)++;
  }

  for(int i = 0; i < players.size(); i++) {
    if(players.at(i) - q > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}