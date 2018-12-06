#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int coin[n]; for(int i = 0; i<n; ++i) cin >> coin[i];
	int v; cin >> v;

	int ways[v];
	memset(ways, 0, v * sizeof(int)); //themis compiler sucks
	for (int j = 0; j < n; ++j) {
		for (int i = v - 1; i >= 0; --i) {
			int x = i + 1;
			if(coin[j] == x) ways[i] = 1;
			int g = i - coin[j];
			if(g >= 0) {
				if(ways[g] != 0 && (ways[i] == 0 || ways[g] + 1 < ways[i])) ways[i] = ways[g] + 1;
			}
		}
		// for (int i = 0; i < v; ++i) { cerr << ways[i] << ' '; }
		// cerr << endl;
	}

	int ans = ways[v-1] == 0 ? -1 : ways[v-1];
	cout << ans;
	return 0;
}
