//https://www.acmicpc.net/problem/11052
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int p[10001];
	int d[1001];
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}
	cout << d[n];
	return 0;
}