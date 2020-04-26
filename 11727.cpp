//https://www.acmicpc.net/problem/11727
//timed out
#include <iostream>

using namespace std;

int tile2(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 3;
	}
	else {
		return ((tile2(n - 1) % 10007) + (2 * tile2(n - 2)) % 10007) % 10007;
	}
}

int main() {
	
	int n;
	cin >> n;
	cout << tile2(n);

	return 0;
}