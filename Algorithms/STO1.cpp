#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Matrix {
private:
	int sizeX;
	int sizeY;
	vector<int> contents;
public:
	Matrix(int x, int y) : sizeX(x), sizeY(y) {
		contents.reserve(sizeX * sizeY);
	 }
	int get(int x, int y) {
		return contents[x*sizeX + y];
	}
	void set(int x, int y, int value) {
		contents[x*sizeX + y] = value;
	}
	void cerrContents() {
		for (int i = 0; i < sizeX; i++)
		{
			for (int j = 0; j < sizeY; j++)
			{
				cerr << contents[i*sizeX + j] << ' ';
			}
			cerr << endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	Matrix m{5, 7};
	m.cerrContents();
	return 0;
}
