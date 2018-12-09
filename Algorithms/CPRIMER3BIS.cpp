#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  ll n; cin >> n;
  if(n==0) cout << 1;
  else cout << n + (n - 1) * (n - 2) / 2;

  return 0;
}
