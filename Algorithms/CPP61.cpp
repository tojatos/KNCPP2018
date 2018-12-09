#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int p, a, b; cin >> p >> a >> b;
  for (int i = a; i <= b; ++i) {
	if(i % p == 0) cout << i << ' ';
  }

  return 0;
}
