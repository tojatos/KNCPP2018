#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int a, k;
    cin >> a >> k;
    int tanks[a];
    for (int i = 0; i < a; i++) cin >> tanks[i];
    int index = 1;
    bool isFound;
    for (int i = 0; i < a; i++) {
      if(tanks[i] != index) {
        isFound = false;
        for(int j = i; j < i+k; j++) {
          if(tanks[j] == index) {
            swap(tanks[i], tanks[j]);
            isFound = true;
            break;
          }
        }
        if(!isFound) {
          break;
        }
      }

      index++;
    }
    cout << (isFound ? "TAK\n" : "NIE\n");
  }

    // queue<int> tanks;
    // vector<int> waiting;
    // for (int i = 0; i < a; i++) {
      // int tmp; cin >> tmp;
      // tanks.push(tmp);
    // }
  //   int index = 1;
  //   while(!tanks.empty()){
  //     int next = tanks.front();
  //     if(next == index){
  //       // cout << "POP!" << endl;
  //       tanks.pop();
  //       index++;
  //       continue;
  //     }
  //     else if(!waiting.empty() && waiting.front() == index) {
  //       // cout << "W-POP!" << endl;
  //       waiting.pop_back();
  //       index++;
  //       continue;
  //     }
  //     else if(waiting.size() < k) {
  //       // cout << "WAIT!" << endl;
  //       tanks.pop();
  //       waiting.push_back(next);
  //       sort(waiting.begin(), waiting.end());
  //       continue;
  //     }
  //     break;
  //   }
  //   if(!tanks.empty()) cout << "NIE\n";
  //   else cout << "TAK\n";
  // }

  return 0;
}
