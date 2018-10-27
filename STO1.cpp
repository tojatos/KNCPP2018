#include <iostream>
using namespace std;

void setUp();

int t, n, m;
int** array;

int main(int argc, char const *argv[])
{
	setUp();

	return 0;
}
void setUp()
{
	cin >> t >> n >> m;
	array = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		array[i] = new int[m];
	}


}
