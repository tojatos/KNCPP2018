#include<bits/stdc++.h>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }
int main()
{
	int dataSets; cin >> dataSets;
	while(dataSets--) {
		int n, m; cin >> n >> m;
		int arr[n][m];
		int ans[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> arr[i][j];
			}
		}
		for (int j = m - 1; j >= 0; --j) {
			for (int i = 0; i < n; ++i) {
				if(j==m - 1) ans[i][j] = arr[i][j];
				else {
					int mini = INT_MAX;

					if(i > 0) mini = min(mini, ans[i-1][j+1]);
					mini = min(mini, ans[i][j+1]);
					if(i < n - 1) mini = min(mini, ans[i+1][j+1]);

					ans[i][j] = arr[i][j] + mini;
				}
			}
		}

		int mini = INT_MAX;
		for (int i = 0; i < n; ++i) {
		     mini = min(mini, ans[i][0]);
		}
		cout << mini <<  endl;
	}
	return 0;
}
