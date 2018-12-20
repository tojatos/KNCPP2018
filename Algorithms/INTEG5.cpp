#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; }

float randomBetween(float a, float b) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = b - a;
    float r = random * diff;
    return a + r;
}
void start() {
	srand(time(NULL));
	int t; cin >> t;
	while (t--) {
		float m, a, b, p, q; cin >> m >> a >> b >> p >> q;
		int w; cin >> w;
		int coef[w]; for (int i = 0; i < w; ++i) cin >> coef[i];

		int under = 0;
		for(int j = 0; j < m; j++) {
			float x = randomBetween(a, b);
			float y = randomBetween(p, q);

			float v = 0;
			for (int i = 0; i < w; ++i) {
				v += coef[i] * pow(x, w - i - 1);
			}

			if(y < v && y > 0) under++;
			if(y > v && y < 0) under--;
		}
		float integ = under/m * (b-a) * (q-p);
		cout << fixed << setprecision(1) << integ << endl;
	}
}
