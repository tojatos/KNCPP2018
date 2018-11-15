#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  int n;
  cin >> k;
  int arr[k];
  for (int i = 0; i < k; i++)
  {
    cin >> arr[i];
  }
  cin >> n;
  for(int i = 0; i < k; i++) {
    while(n - arr[i] >= 0)
    {
      cout << arr[i] << ' ';
      n -= arr[i];
    }
    if(n==0) return 0;
  }

  return 0;
}
