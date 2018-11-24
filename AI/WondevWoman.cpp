#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct LegalAction {
	string atype;
	int index;
	string dir1;
	string dir2;
};
struct Coordinate {
	int x;
	int y;
};
class Board {
private:
	int size;
	vector<int> boardContents;
public:
	Board(vector<int> b, int s) : size(s), boardContents(b) { }
	int getAt(int x, int y) {
		return boardContents[x*size + y];
	}
	void setAt(int x, int y, int value) {
		boardContents[x*size + y] = value;
	}
	void cerrContents() {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cerr << boardContents[i*size + j] << ' ';
			}
			cerr << endl;
		}
	}
};


vector<int> getBoardContents(int size) {
	vector<int> board;
	for (int i = 0; i < size; i++) {
		string row;
		cin >> row; cin.ignore();
		for(int j = 0; j < size; j++) {
			switch (row[j]) {
				case '.': board.push_back(-1); break;
				default:
					int x = row[j] - '0';
					board.push_back(x);
					break;
			}
		}
	}
	return board;
}
vector<Coordinate> getCoordinates(int unitsPerPlayer) {
	vector<Coordinate> coordinates;
	for (int i = 0; i < unitsPerPlayer; i++) {
		Coordinate c;
		cin >> c.x >> c.y; cin.ignore();
		coordinates.push_back(c);
	}
	return coordinates;
}

vector<LegalAction> getLegalActions(int legalActionsNum){
	vector<LegalAction> legalActions;
	for (int i = 0; i < legalActionsNum; i++) {
		LegalAction a;
		cin >> a.atype >> a.index >> a.dir1 >> a.dir2; cin.ignore();
		legalActions.push_back(a);
	}
	return legalActions;
}
int main()
{
	int size; cin >> size; cin.ignore();
	int unitsPerPlayer; cin >> unitsPerPlayer; cin.ignore();

	// game loop
	while (1) {
		vector<int> boardContents = getBoardContents(size);
		Board board{boardContents, size};
		// board.cerrContents();
		vector<Coordinate> allyCoordinates = getCoordinates(unitsPerPlayer);
		vector<Coordinate> enemyCoordinates = getCoordinates(unitsPerPlayer);
		int legalActionsNum; cin >> legalActionsNum; cin.ignore();
		vector<LegalAction> legalActions = getLegalActions(legalActionsNum);
		cout << legalActions[0].atype << ' ' << legalActions[0].index << ' ' << legalActions[0].dir1 << ' ' << legalActions[0].dir2 << endl;
	}
}
