#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int bookHeights[n];
  for(int i = 0; i < n; i++)
  {
	cin >> bookHeights[i];
  }
  int* maxElementAddress = max_element(bookHeights, bookHeights + n);
  int maxElementIndex = distance(bookHeights, maxElementAddress);
  int maxElement = *maxElementAddress;

cout << maxElementIndex << " " <<  maxElement;

  return 0;
}
