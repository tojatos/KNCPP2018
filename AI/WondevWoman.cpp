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
struct Coordinate{
	int x;
	int y;
};

// class GameState {
// public:
// 	vector<int> board;
// };

vector<int> getBoard(int size) {
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
void cerrBoard(vector<int> board, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cerr << board[i*size + j] << ' ';
		}
		cerr << endl;
	}
}
int main()
{
	int size; cin >> size; cin.ignore();
	int unitsPerPlayer; cin >> unitsPerPlayer; cin.ignore();

	// game loop
	while (1) {
		vector<int> board = getBoard(size);
		vector<Coordinate> allyCoordinates = getCoordinates(unitsPerPlayer);
		vector<Coordinate> enemyCoordinates = getCoordinates(unitsPerPlayer);
		int legalActionsNum; cin >> legalActionsNum; cin.ignore();
		vector<LegalAction> legalActions = getLegalActions(legalActionsNum);
		cout << legalActions[0].atype << ' ' << legalActions[0].index << ' ' << legalActions[0].dir1 << ' ' << legalActions[0].dir2 << endl;
	}
}
