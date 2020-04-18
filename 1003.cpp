//https://www.acmicpc.net/problem/1003
#include <iostream>

using namespace std;

int d[41][2] = { 0 };

void fibonacci() {
	d[0][0] = 1;
	d[0][1] = 0;
	d[1][0] = 0;
	d[1][1] = 1;
	for (int i = 2; i <= 41; i++) {
		d[i][0] = d[i - 1][0] + d[i - 2][0];
		d[i][1] = d[i - 1][1] + d[i - 2][1];
	}
}

int main() {
	int t;
	cin >> t;

	fibonacci();
	
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << d[n][0] << ' ' << d[n][1] << '\n';
		
	}
	return 0;
}