#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int n, current = 0, k = 1; cin >> n;
  while(true) {
	for(int i = 1; i <= k; ++i) {
	  cout << i << ' ';
	  ++current;
	  if(n == current) exit(0);
	}
	++k;
  }

  return 0;
}
