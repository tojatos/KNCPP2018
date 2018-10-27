#include <iostream>
using namespace std;

void setUp();
void coutArrays();
int calculateCheapestPath(int);

int t;
int *n, *m;
int ***arrays;

int main(int argc, char const *argv[])
{
	setUp();
	coutArrays();
	for (int k = 0; k < t; ++k)
	{
		int cheapest = calculateCheapestPath(k);
		cout << cheapest << endl;
	}
	return 0;
}

void coutArrays()
{
	for (int k = 0; k < t; ++k)
	{
		int **array = arrays[k];
		for (int i = 0; i < n[k]; i++)
		{
			for (int j = 0; j < m[k]; j++)
			{
				cout << array[i][j] << '\t';
			}
			cout << endl;
		}
		cout << endl;
	}
}

void setUp()
{
	cin >> t;
	n = new int[t];
	m = new int[t];

	arrays = new int**[t];

	for (int k = 0; k < t; ++k)
	{
		cin >> n[k] >> m[k];
		arrays[k] = new int*[n[k]];
		int **array = arrays[k];

		for (int i = 0; i < n[k]; ++i)
		{
			array[i] = new int[m[k]];
			for (int j = 0; j < m[k]; ++j)
			{
				int tmp;
				cin >> tmp;
				array[i][j] = tmp;
			}
		}
	}
}

int calculateCheapestPath(int k)
{
	int **array = arrays[k];
	int costArray[n[k]][m[k]];
	int rowPointer;
	// for (int i = 0; i < n[k]; i++)
	// {
	// 	for (int j = 0; j < m[k]; j++)
	// 	{
	// 		cout << array[i][j] << '\t';
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	return 0;
}
