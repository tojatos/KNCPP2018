#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, c; cin >> a >> b >> c;
	int p, k; cin >> p >> k;
	for (int i = p; i <= k; i++) {
	  printf("p(%i)=%i\n", i, a*i*i+b*i+c);
	}

	return 0;
}
