#include<bits/stdc++.h>
using namespace std;

void print(int i, int n) {
  int k = (n-i) / 2;
  for(int j = 0; j < k; ++j) cout << '.';
  for(int j = 0; j < i; ++j) cout << 'X';
  for(int j = 0; j < k; ++j) cout << '.';
  cout << '\n';

}
int main()
{
  ios::sync_with_stdio(false);
  int n; cin >> n;
  bool is_odd = n % 2 == 1;
  int max = n / 2;
  for(int i = 1 + (is_odd ? 0 : 1); i <= n; i += 2) print(i, n);
  if(!is_odd) print(n, n);
  for(int i = n - 2; i >= 1 + (is_odd ? 0 : 1); i -= 2) print(i, n);

  return 0;
}
