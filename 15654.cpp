#include <iostream>
#include <algorithm>

using namespace std;

bool c[9] = { false };
int a[9] = { 0 };
int num[9] = { 0 };

void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		if (c[i]) {
			continue;
		}
		c[i] = true;
		a[index] = num[i];
		go(index + 1, n, m);
		c[i] = false;
	}
}

int main() {

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	//부분정렬 쌉가능

	go(0, n, m);

	return 0;
}