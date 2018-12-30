#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int t; cin >> t;
  while(t--) {
	int n, m; cin >> n >> m;
	set<int> list[n];
	for (int i = 0; i < m; ++i) {
	  int a, b; cin >> a >> b;
	  list[a-1].insert(b-1);
	  list[b-1].insert(a-1);
	}
	set<int> visited;
	queue<int> to_visit;
	visited.insert(0);
	to_visit.push(0);
	while(!to_visit.empty()) {
	  int index = to_visit.front();
	  to_visit.pop();
	  for (auto el : list[index]) {
		if(!visited.count(el)) {
		  visited.insert(el);
		  to_visit.push(el);
		}
	  }
	}
	if(visited.size() == n) cout << "TAK";
	else cout << "NIE";
	cout << endl;
  }
}
