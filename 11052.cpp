//https://www.acmicpc.net/problem/11052
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int p[n];
	int d[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}
	cout << d[n - 1];
	return 0;
}