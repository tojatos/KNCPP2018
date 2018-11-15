#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  int n;
  cin >> k;
  int arr[k];
  vector<int> ans;
  for (int i = 0; i < k; i++)
  {
    cin >> arr[i];
  }
  cin >> n;
  for(int i = 0; i < k; i++) {
    while(n - arr[i] >= 0)
    {
      ans.push_back(arr[i]);
      n -= arr[i];
    }
    if(n==0) {
      for(int j = 0; j < ans.size(); j++) cout << ans[j] << ' ';
      return 0;
    }
  }
  cout << "NIE";

  return 0;
}
