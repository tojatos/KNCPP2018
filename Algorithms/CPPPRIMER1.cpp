#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, c; cin >> a >> b >> c;
	for (int i = 1; i <= 10; i++) {
	  printf("p(%i)=%i\n", i, a*i*i+b*i+c);
	}

	return 0;
}
