#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; }

char next(char x) {
	switch (x) {
		case 'A': return 'B';
		case 'B': return 'C';
		case 'C': return 'D';
		case 'D': return 'A';
		default: exit(1);
	}
}

char last(char x) {
	switch (x) {
		case 'A': return 'D';
		case 'B': return 'A';
		case 'C': return 'B';
		case 'D': return 'C';
		default: exit(1);
	}
}
void start() {
	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		n = n%12; if(n == 0) n = 12;
		char x = 'A';
		int j = 1;
		while (true)
		{
			if (j==n) { cout << x << endl; break;}
			x = next(x);
			j++; if (j==n) { cout << x << endl; break;}
			x = next(x);
			j++; if (j==n) { cout << x << endl; break;}
			x = last(x);
			j++;
		}
	}
}
