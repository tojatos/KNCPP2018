#include <bits/stdc++.h>
using namespace std;
int k;
int fib(int n) {
  cout << n << '\n';
  if(--k <= 0) exit(0);
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}
int main() {
  cout.sync_with_stdio(false);
  int n;
  cin >> n >> k;
  fib(n);
  return 0;
}
