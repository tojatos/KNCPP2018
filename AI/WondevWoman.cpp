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

int main()
{
	const int range_from  = 0;
	const int range_to    = 10;
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(range_from, range_to);
	int size;
	cin >> size; cin.ignore();
	int unitsPerPlayer;
	cin >> unitsPerPlayer; cin.ignore();

	// game loop
	while (1) {
		for (int i = 0; i < size; i++) {
			string row;
			cin >> row; cin.ignore();
		}
		for (int i = 0; i < unitsPerPlayer; i++) {
			int unitX;
			int unitY;
			cin >> unitX >> unitY; cin.ignore();
		}
		for (int i = 0; i < unitsPerPlayer; i++) {
			int otherX;
			int otherY;
			cin >> otherX >> otherY; cin.ignore();
		}
		int legalActionsNum;
		cin >> legalActionsNum; cin.ignore();

		vector<LegalAction> legalActions;
		for (int i = 0; i < legalActionsNum; i++) {
			LegalAction a;
			cin >> a.atype >> a.index >> a.dir1 >> a.dir2; cin.ignore();
			legalActions.push_back(a);
		}
		cout << legalActions[0].atype << ' ' << legalActions[0].index << ' ' << legalActions[0].dir1 << ' ' << legalActions[0].dir2 << endl;

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;
		// while(1) {
		// cout << "MOVE&BUILD 0 N S" << endl;
		// }
	}
}
