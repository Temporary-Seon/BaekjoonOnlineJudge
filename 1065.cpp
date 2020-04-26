#include <iostream>

using namespace std;

bool check(int x) {

	bool ans = false;
	if (1 <= x && x < 100) {
		ans = true;
	}
	else if (100 <= x && x < 1000) {
		int a = (x % 10) - ((x / 10) % 10);
		int y = x / 10;
		int b = (y % 10) - ((y / 10) % 10);
		if (a == b) {
			ans = true;
		}
		else {
			ans = false;
		}
	}
	else if (x == 1000) {
		ans = false;
	}
	return ans;
}

int main() {
	
	int n;
	int cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (check(i) == true) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}