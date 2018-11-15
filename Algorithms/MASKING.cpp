#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool areAllHiddenFor(int n, int m, string map, int carpet_width)
{
  int carpet_left = m;
  int i = 0;
  for(; i < n; i++)
  {
    if(map[i] == '+')
    {
      --carpet_left;
      i += carpet_width-1;
      if(carpet_left==0) break;
    }
  }
  bool areAllHidden = true;
  for(i++; i < n; i++)
  {
    if(map[i] == '+')
    {
      areAllHidden = false;
      break;
    }
  }
  return areAllHidden;
}

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
  int left = 1;
  int right = 500000;
  while(left < right)
  {
    int middle = (left+right) / 2;
    if(!areAllHiddenFor(n, m, map, middle)) left = middle + 1;
    else right = middle;
    // cout << left << " - " << right << endl;
  }
  return left;
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
