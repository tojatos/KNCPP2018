#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	ll arr[n];
	for (int i = 0; i < n; ++i) {
	     arr[i] = i + 1;
			 int t = i - 2;
			 if(t<=0) continue;
			 while(t != 0) {
				 arr[i] += arr[t] - 1;
				 --t;
			 }
	}
	// for (int i = 0; i < n; ++i) {
	//      cout << arr[i] << ' ';
	// }
	cout << arr[n-1];

	return 0;
}
