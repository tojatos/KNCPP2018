#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int n, suma = 0;
  cin >> n;
  while(n--)
  {
	int tmp;
	cin >> tmp;
	suma += tmp;
  }
  cout << suma;
  return 0;
}
