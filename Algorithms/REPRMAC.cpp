#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int n, m; cin >> n >> m;
  int matrix[n][n];
  set<int> list[n];
  memset(matrix, 0, sizeof(matrix));
  for (int i = 0; i < m; ++i) {
	int a, b; cin >> a >> b;
	matrix[a-1][b-1] = 1;
	matrix[b-1][a-1] = 1;
	list[a-1].insert(b-1);
	list[b-1].insert(a-1);
  }

  cout << "Macierz:" << endl;
  for (int i = 0; i < n; ++i) { 
	for (int j = 0; j < n; ++j) { 
	  cout << matrix[i][j];
	}
	cout << endl;
  }

  cout << endl;
  cout << "Lista:" << endl;
  for (int i = 0; i < n; ++i) {
	cout << i + 1 << ":";
	for (auto el : list[i]) {
	  cout << " " << el + 1;
	}
	cout << endl;
  }
}
