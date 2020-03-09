//https://www.acmicpc.net/problem/1463
#include <iostream>
#include <math.h>
using namespace std;
int d[1000001] = { 0 };
int cycle(int x) {
	//D[n] = min(D[n/3], D[n/2], D[n-1]) + 1
	if (x == 1) {
		return 0;
	}
	if (d[x] > 0) {
		return d[x];
	}
	d[x] = cycle(x-1) + 1;
	if (x % 2 == 0) {
		int temp = cycle(x / 2) + 1;
		if (d[x] > temp) {
			d[x] = temp;
		}
	}
	if (x % 3 == 0) {
		int temp = cycle(x/3) + 1;
		if (d[x] > temp) {
			d[x] = temp;
		}
	}
	return d[x];
}

int main() {

	int x;
	cin >> x;
	cout << cycle(x);
	return 0;
}