#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int tmp, tmp2, sum = 0;
	while(cin >> tmp) {
	  if(tmp==-1) break;
	  ++sum;
	  tmp2 = tmp;
	  while(tmp2--) cin >> tmp;
	}
	cout << sum;

	return 0;
}
