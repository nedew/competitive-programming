#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  string op;
  cin >> a >> op >> b;
  int ans = op == "+" ? a+b : a-b;
  cout << ans << endl;
}