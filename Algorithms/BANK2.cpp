#include<bits/stdc++.h>
using namespace std;

int min(int a, int b) {return a<b ? a : b;}
int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int nom[n]; for(int i = 0; i<n; ++i) cin >> nom[i];
	int v; cin >> v;

	int table[v+1];
	table[0] = 0;
	for(int i = 1; i <=v; i++) {
		table[i] =  20001;
	}

	for (int j = 0; j < n; j++) {
		for(int i = 1; i <=v; i++) {
			if(nom[j] <= i){
				 table[i] = min(table[i], table[i-nom[j]] + 1);
			}
		}
		// for(int i = 1; i <=v; i++) { cout << table[i] << ' ';}
		// cout << endl;
	}

	int answer = (table[v] != 20001) ? table[v] : -1;
	cout <<  answer;
	return 0;
}
