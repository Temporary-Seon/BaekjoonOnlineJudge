#include <iostream>
using namespace std;

int main() {

	int n;
	int k;
	cin >> n >> k;
	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	int ans;
	if ((n - k) % (k - 1) == 0) {
		ans = (n - k) / (k - 1);
	}
	else {
		ans = (n - k) / (k - 1);
		ans += 1;
	}
	ans += 1;

	cout << ans << '\n';
	return 0;
}