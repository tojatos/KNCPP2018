#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int m, n; cin >> m >> n; cin.ignore(); 
  string pattern; cin >> pattern; cin.ignore();
  deque<char> ans;
  int ptr = 0;
  char tmp; 
  for(int i = 0; i < n; ++i) {
	cin.get(tmp);// cin.ignore();
	//cout << pattern[ptr] << ' ' << ptr << ' ' << tmp << endl;
	if(pattern[ptr] == tmp) {
	  ans.push_back(tmp);
	  ++ptr;
	  if(ptr == m) {
		cout << i - m + 1;
		exit(0);
	  }
	} else {
	  while(!ans.empty()) {
		ans.pop_front();
		--ptr;
		bool is_correct = true;
		for(int j = 0; j < ans.size(); ++j) {
		  if(ans[j] != pattern[j]) {
			is_correct = false;
			break;
		  }
		}
		if(is_correct) {
		  if(pattern[ptr] == tmp) {
			ans.push_back(tmp);
			++ptr;
			if(ptr == m) {
			  cout << i - m + 1;
			  exit(0);
			}
		  }
		  break;
		}
	  }
	}
  }
  cout << "NIE";

  return 0;
}
