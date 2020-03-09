//https://www.acmicpc.net/problem/11726
#include <iostream>
using namespace std;

int d[1001] = { 0 };
int cycle(int x) {
	//d[n] = d[n-1] + d[n-2]
	if (d[x] > 0) {
		return d[x];
	}
	
	if (x == 1) {
		d[x] = 1;
		return 1;
	}
	else if (x == 2) {
		d[x] = 2;
		return 2;
	}
	else {
		int temp = cycle(x - 1) + cycle(x - 2);
		d[x] = temp % 10007;
		return temp;
	}
}

int main() {
	int n;
	cin >> n;
	cycle(n);
	cout << d[n];
	return 0;
}