#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; }

void start() {
  int m, n; cin >> m >> n; cin.ignore();
  string pattern, text; cin >> pattern >> text; cin.ignore();

  int ps_array[m];
  ps_array[0] = 0;
  for (int i = 1, j = 0; i < m;) {
    if(pattern[i] != pattern[j]) {
      j = j > 0 ? ps_array[j-1] : 0;
      if(j==0) {
        ps_array[i] = 0;
        ++i;
      }
    } else {
      ++j;
      ps_array[i] = j;
      ++i;
    }
  }
  for (int i = 0, j = 0; i < n;) {
    if(text[i] == pattern[j]) {
      ++i; ++j;
      if(j == m) {
        cout << i - j;
        exit(0);
      }
    } else {
      if(j==0) i++;
      else j = ps_array[j-1];
    }
  }
  cout << "NIE";
}
