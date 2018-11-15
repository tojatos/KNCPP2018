#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

void setUp();
void coutArray(int**, int, int);
int calculateCheapestPath(int);
int calculateCost(int**, int, int, int);

int t;
int *n, *m;
int ***arrays;

int main(int argc, char const *argv[])
{
	setUp();
	// for (int k = 0; k < t; ++k)
	// {
	// 	int **array = arrays[k];
	// 	coutArray(array, n[k], m[k]);
	// }
	for (int k = 0; k < t; ++k)
	{
		int cheapest = calculateCheapestPath(k);
		cout << cheapest << endl;
	}
	return 0;
}

void coutArray(int **array, int rows, int cols)
{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << array[i][j] << '\t';
			}
			cout << endl;
		}
		cout << endl;
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
	int **costArray = new int*[n[k]];
	cout << array[0][0] << '\t' << costArray[0][0] << endl;
	costArray[0][0] = 42;
	cout << array[0][0] << '\t' << costArray[0][0] << endl;

	for (int j = 0; j < m[k]; j++)
	{
		for (int i = 0; i < n[k]; i++)
		{
			if(j==0) costArray[i][j] = array[i][j];
			else costArray[i][j] = calculateCost(costArray, k, i, j);
		}
	}
	return 0;
}

int calculateCost(int **costArray, int k, int i, int j)
{
	assert(j > 0);
	int **array = arrays[k];
	for (int a = i-1; a <= i+1; a++)
	{
		if(a<0 || a>=n[a]) continue;
		// if(array[a][j-1])

	}


	return 0;
}
