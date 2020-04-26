#include <iostream>

using namespace std;

bool c[9] = { false };
int a[9] = { 0 };

void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';

		return;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i]) {
			continue;
		}
		if (i < a[index - 1]) {
			continue;
		}
		c[i] = true;
		a[index] = i;
		go(index + 1, n, m);
		c[i] = false;
	}
}

int main() {

	int n, m;
	cin >> n >> m;

	go(0, n, m);

	return 0;
}