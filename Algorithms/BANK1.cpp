#include<bits/stdc++.h>
using namespace std;
struct Money {
	int moneyLeft;
	vector<int> nom;
};

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int nom[n]; for(int i = 0; i<n; ++i) cin >> nom[i];
	int v; cin >> v;

	Money sets[n];
	for (int i = 0; i < n; ++i) {
		sets[i].moneyLeft = v;
		for (int j = 0; j < n; ++j) {
			sets[i].nom.push_back(nom[j]);
		}
	}

	for (int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) cerr << sets[i].nom[j] << ' ';
		cerr << endl;
	}

	return 0;
}
