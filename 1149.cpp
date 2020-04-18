//https://www.acmicpc.net/problem/1149
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans;
	int cost[2][3] = { 0 };
	for (int i = 0; i < n; i++) {
		if (cost[0][0] == 0 && cost[0][1] == 0 && cost[0][2] == 0) {
			cin >> cost[0][0] >> cost[0][1] >> cost[0][2];
		}
		else {
			int r;
			int g;
			int b;
			cin >> r >> g >> b;
			cost[1][0] = min(cost[0][1] + r, cost[0][2] + r);
			cost[1][1] = min(cost[0][0] + g, cost[0][2] + g);
			cost[1][2] = min(cost[0][0] + b, cost[0][1] + b);

			cost[0][0] = cost[1][0];
			cost[0][1] = cost[1][1];
			cost[0][2] = cost[1][2];
		}
		//cout << cost[0][0] << ' ' << cost[0][1] << ' ' << cost[0][2] << '\n';
	}
	ans = min(cost[0][0], min(cost[0][1], cost[0][2]));
	cout << ans;
	return 0;
}