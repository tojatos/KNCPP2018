#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int calc_min_width(int n, int m, string map)
{
  if(m == 0) return 0;
  bool isCarpetNeeded = false;
  for(int i = 0; i < n; i++)
  {
    if(map[i] == '+')
    {
      isCarpetNeeded = true;
      break;
    }
  }
  if(!isCarpetNeeded) return 0;
  for(int carpet_width = 1; carpet_width <= n; carpet_width++)
  {
    int carpet_left = m;
    int i = 0;
    for(; i < n; i++)
    {
      // cout << map[i];
      if(map[i] == '+')
      {
        --carpet_left;
        i += carpet_width-1;
        if(carpet_left==0) break;
      }
    }
    bool areAllHidden = true;
    // cout << i << endl;
    for(i++; i < n; i++)
    {
      if(map[i] == '+')
      {
        areAllHidden = false;
        break;
      }
    }
    if(areAllHidden)
    {
      return carpet_width;
    }
    // cout << endl;
  }
  return 0;
}

int main()
{
  int n, m;
  string map;
  cin >> n >> map >> m;

  int min_width = calc_min_width(n, m, map);
  cout << min_width << endl;
  return 0;
}
