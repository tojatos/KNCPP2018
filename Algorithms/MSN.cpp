#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
  if(n==0) return 1;
  return factorial(n-1) * n;
}
int MSN(int n, int k) {
  int c = n-k;
  return (factorial(n) / (factorial(k) * factorial(c)));
}
int main() {
  cout.sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  cout << MSN(n, k);
  return 0;
}
