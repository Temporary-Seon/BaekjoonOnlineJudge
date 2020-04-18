//https://www.acmicpc.net/problem/11694
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int d[1001];
	int p[1001];
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		d[i] = -1;
	}
	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (d[i] == -1 || d[i] > d[i - j] + p[j]) {
				d[i] = d[i - j] + p[j];
			}
		}
	}
	cout << d[n];
	return 0;
}