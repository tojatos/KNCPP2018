#include <bits/stdc++.h>
using namespace std;

int getAnswer(vector<int>& vec, int k, int n) {
  int parts = 0, partSum = 0;
  for(int j = 0; j < n; j++) {
    int i = vec[j];
    partSum += i;
    if(partSum > k) {
      parts++;
      partSum = i;
    }
  }
return parts;
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
