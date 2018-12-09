#include<bits/stdc++.h>
using namespace std;

int calc(int n) {
  if(n<1) return 1;
  return calc(n-1) + n - 1;
}
int main()
{
  ios::sync_with_stdio(false);
  int n; cin >> n;
  cout << calc(n);
  

  return 0;
}
