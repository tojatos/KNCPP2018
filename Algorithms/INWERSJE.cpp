#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; }
void start() {
	int n; cin >> n;
	int arr[n]; for (int i = 0; i < n; ++i) cin >> arr[i];

	set<int> s;
	int count = 0;
	for (int i = n - 1; i >= 0; i--) {
			s.insert(arr[i]);
			set<int>::iterator it = s.lower_bound(arr[i]);
			count += distance(s.begin(), it);
	}
	cout << count;
}
