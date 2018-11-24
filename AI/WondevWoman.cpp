#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

enum Direction { N, NE, NW, E, W, S, SE, SW };
map<string, Direction> dirMap = {
	{"N", N},
	{"NE", NE},
	{"NW", NW},
	{"E", E},
	{"W", W},
	{"S", S},
	{"SE", SE},
	{"SW", SW},
};

struct LegalAction {
	string atype;
	int index;
	string dir1;
	string dir2;
};
struct Point {
	int x;
	int y;

	Point() {}
	Point(int a, int b) : x(a), y(b) {}
	Point operator+(const Point other) {
		return Point(x + other.x, y + other.y);
	}
};
class Board {
private:
	int size;
	vector<int> boardContents;
public:
	Board(vector<int> b, int s) : size(s), boardContents(b) { }
	int getAt(Point p) {
		return getAt(p.x, p.y);
	}
	int getAt(int x, int y) {
		return boardContents[x*size + y];
	}
	void setAt(Point p, int value) {
		setAt(p.x, p.y, value);
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

void coutAction(LegalAction a) {
	cout << a.atype << ' ' << a.index << ' ' << a.dir1 << ' ' << a.dir2 << endl;
}
Point getDirectionPoint(string dir) {
	switch (dirMap[dir]) {
		case N: return Point(0, 1);
		case NE: return Point(1, 1);
		case NW: return Point(-1, 1);
		case E: return Point(1, 0);
		case W: return Point(-1, 0);
		case S: return Point(0, -1);
		case SE: return Point(1, -1);
		case SW: return Point(-1, -1);
	}
}

class GameState {
private:
	Board board;
	vector<Point> allyPoints;
	vector<Point> enemyPoints;
	vector<LegalAction> legalActions;
public:
	GameState(Board b, vector<Point> a, vector<Point> e, vector<LegalAction> l)
	 : board(b), allyPoints(a), enemyPoints(e), legalActions(l) { }
	int getScore() {
		int score = 0;
		Point allyCoordiate = allyPoints[0];
		for(LegalAction l : legalActions) {
			if(l.atype=="MOVE&BUILD"){
				Point targetPoint = allyCoordiate + getDirectionPoint(l.dir1);
				if(board.getAt(targetPoint) == 3) score += 100;
			}
		}
		return score;
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
vector<Point> getPoints(int unitsPerPlayer) {
	vector<Point> coordinates;
	for (int i = 0; i < unitsPerPlayer; i++) {
		Point c;
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
		vector<Point> allyPoints = getPoints(unitsPerPlayer);
		vector<Point> enemyPoints = getPoints(unitsPerPlayer);
		int legalActionsNum; cin >> legalActionsNum; cin.ignore();
		vector<LegalAction> legalActions = getLegalActions(legalActionsNum);
		GameState g{board, allyPoints, enemyPoints, legalActions};
		cerr << g.getScore();
		coutAction(legalActions[0]);
	}
}
