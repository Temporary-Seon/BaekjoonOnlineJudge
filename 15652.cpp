#include <iostream>

using namespace std;

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
		if (i < a[index - 1] && index > 0) {
			continue;
		}
		a[index] = i;
		go(index + 1, n, m);
	}
}

int main() {

	int n, m;
	cin >> n >> m;

	go(0, n, m);

	return 0;
}