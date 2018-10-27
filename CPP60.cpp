#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int n;
  cin >> n;
  while(n--)
  {
	int tmp;
	cin >> tmp;
	const char* text = (tmp%3) ? "niepodzielna" : "podzielna";
	cout << text << endl;
  }
  return 0;
}
