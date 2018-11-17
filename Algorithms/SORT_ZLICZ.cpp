#include <bits/stdc++.h>
using namespace std;
int main() {
  cout.sync_with_stdio(false);
  int n;
  cin >> n;
  int tab[1001] = {0};
  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    tab[tmp]++;
  }
  for (int i = 0; i <= 1000; i++) {
    while(tab[i]-->0) {//tab[i] dąży do 0 :)
      cout << i << ' ';
    }
  }
  return 0;
}
