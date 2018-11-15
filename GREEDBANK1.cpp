#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[] = {100, 50, 20, 10, 5, 2, 1};
  for(int i = 0; i < 7; i++) {
    while(n - arr[i] >= 0)
    {
      cout << arr[i] << ' ';
      n -= arr[i];
    }
    if(n==0) return 0;
  }

  return 0;
}
