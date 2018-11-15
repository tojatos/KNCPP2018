#include <bits/stdc++.h>
using namespace std;

int getAnswer(vector<int>& vec, int k, int n) {
  int lo = 0, hi = 0;
  for(int j = 0; j < n; j++) {
    int i = vec[j];
    hi += i;
    lo = max(lo, i);
  }
  while (lo < hi) {
    int mid = (lo + hi) / 2;
    int parts = 0, partSum = 0;
    bool isValid = true;
    for(int j = 0; j < n; j++) {
      int i = vec[j];
      if(parts > k) {
        isValid = false;
        break;
      }
      if(partSum + i > mid) {
        parts++;
        partSum = i;
      } else {
        partSum += i;
      }
    }
    if(!isValid) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }
  return hi;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> bookHeights;
  for(int i = 0; i < n; i++) {
    int tmp; cin >> tmp;
    bookHeights.push_back(tmp);
  }
  cout << getAnswer(bookHeights, k, n);

  return 0;
}
