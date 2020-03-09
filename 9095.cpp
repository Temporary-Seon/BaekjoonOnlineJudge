//https://www.acmicpc.net/problem/9095
#include <iostream>
using namespace std;

int d[11] = { 0 };
int cycle(int x) {
	if (d[x] > 0) {
		return d[x];
	}
	if (x == 1) {
		d[1] = 1;
		return 1;
	}
	else if (x == 2) {
		d[2] = 2;
		return 2;
	}
	else if (x == 3) {
		d[3] = 4;
		return 4;
	}
	else {
		int temp = cycle(x - 1) + cycle(x - 2) + cycle(x - 3);
		d[x] = temp;
		return d[x];
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cout << cycle(x) << '\n';
	}

	return 0;
}